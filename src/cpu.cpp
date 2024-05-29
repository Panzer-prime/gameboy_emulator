#include<iostream>
#include "fstream"
#include "cpu.h"

using namespace std; 

CPU::CPU(): memory(65356, 0){}
CPU::~CPU(){};
//TODO try to found why it didnt want to work with for maybe an runtime problem ?
void CPU::init(){
    AF = BC = DE = HL = 0;
    PC = 0x0100; 
    SP = 0xfffe;
     fill(begin(gfx), end(gfx), 0);

    fill(begin(registers), end(registers), 0);
    fill(begin(key), end(key), 0);
    fill(begin(stack), end(stack), 0);

    memory.resize(65536);
    fill(begin(memory),end(memory), 0);
    delaySound = delayTimer = 0; 
}

bool CPU::loadRom(const char* filename) {
     init();
     if(!filename){
        cout<<"filename is empty check main Error code: 404 :(\n";
        return false;
     }
    ifstream file(filename, ios::binary |ios::ate);
    if (!file.is_open()) {
        std::cout << "File couldn't be opened\n";
        return false;
    }

    streampos size = file.tellg();
    if (size > 32768) {
        std::cerr << "File is too big to load\n";
        return false;
    }

    vector<char> buffer(size);
    file.seekg(0, std::ios::beg);
    if (!file.read(buffer.data(), size)) {
        std::cerr << "Error while loading the ROM file\n";
        return false;
    }
    file.close();

    for (streamsize i = 0; i < size; ++i) {
        memory[i] = static_cast<uint8_t>(buffer[i]);
    }
    cout<<" file is installed\n";
    return true;
}

void CPU::emulateCycle(){
   

    executeInstruction();
    if(delayTimer > 0){
        --delayTimer;
    }

    if(delaySound > 0){
        --delaySound; 
    }
}