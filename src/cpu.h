#ifndef CPU_H
#define CPU_H

#include<iostream>
#include<cstdint>
#include<vector>



class CPU
{
private:
    std::vector<uint8_t> memory;
    uint16_t AF, BC, DE, HL, SP, PC;
    uint8_t delayTimer, delaySound, registers[16],stack[16], key[16], opcode; 
    uint8_t gfx[160 * 144];

  
    void init();
public:
    bool drawFlag;

    CPU();
    ~CPU();
    uint16_t fetchOpcodeInstruction();
    void executeInstruction();
    bool loadRom(const char* filename);
    void emulateCycle();

};

#endif //CPU_H