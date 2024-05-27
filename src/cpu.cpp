#include<iostream>
#include "fstream"
#include "cpu.h"

using namespace std; 

CPU::CPU(): memory(65356, 0){}
CPU::~CPU(){};

void CPU::init(){
    PC = AF = BC = DE = HL = SP = 0;

    for(int i = 0; i< 23040; i++){
        gfx[i] = 0;
    }
    for(int i = 0; i < 16; i++){
        key[i] = 0; 
        stack[i]= 0; 
    }
    
    for(int i = 0; i< 65536; i++){
        memory[i] = 0;
    }
}

bool CPU::loadRom(const char* filename) {
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

    return true;
}

void CPU::emulateCycle(){
    init();
    executeInstruction();
    if(delayTimer > 0){
        --delayTimer;
    }

    if(delaySound > 0){
        --delaySound; 
    }
}