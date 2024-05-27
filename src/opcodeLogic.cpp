#include<iostream>
#include <iomanip>
#include "cpu.h"

using std::cout, std::cerr;

uint16_t CPU::fetchOpcodeInstruction(){
        uint16_t operand = memory[PC] << 8 | memory[PC + 1];
        PC += 2;
        cout<<"\nrandom value gave by this"<<operand<<" and program counter"<<PC<<std::endl;
        return operand;
}

void CPU::executeInstruction(){
    uint16_t tempValue = fetchOpcodeInstruction();
    cout<<"\nreturn falue of the fetchOpcodeinstruction"<<std::hex<<tempValue<<std::endl;
    opcode = tempValue;
    cout<<"idk what is this" <<static_cast<int> (opcode)<<std::endl;
    if(!opcode){
        cerr<<"no opcode"<<std::endl;
    }
    switch (opcode)
    {
    case 0x00:
        /* code */
        break;
    
    default:
      cout<<"\nUnknown op code:\n"<<std::hex<<opcode;
            break;
    }
}