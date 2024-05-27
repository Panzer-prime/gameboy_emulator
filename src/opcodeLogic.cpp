#include<iostream>
#include "cpu.h"

uint16_t CPU::fetchOpcodeInstruction(){
    return memory[PC] << 8 | memory[PC + 2];
}

void CPU::executeInstruction(){
    opcode = fetchOpcodeInstruction();

    switch (opcode)
    {
    case 0x100:
        /* code */
        break;
    
    default:
        break;
    }
}