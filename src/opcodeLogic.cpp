#include<iostream>
#include <iomanip>
#include "cpu.h"

using std::cout, std::cerr;
//TODO remove unnecesarry cout fuction and improve performance 
uint16_t CPU::fetchOpcodeInstruction(){
        uint16_t operand = memory[PC] << 8 | memory[PC + 1];
        PC += 2;
        return operand;
}

void CPU::executeInstruction(){
   opcode = fetchOpcodeInstruction();
   cout<<"\nvalue of opcode: "<<std::hex<<std::setw(2)<<std::setfill('0')<<opcode;

switch (opcode) {
    case 0x00: // NOP
        break;
    case 0x01: // LD BC, nn
        break;
    case 0x02: // LD (BC), A
        break;
    case 0x03: // INC BC
        break;
    case 0x04: // INC B
        break;
    case 0x05: // DEC B
        break;
    case 0x06: // LD B, n
        break;
    case 0x07: // RLCA
        break;
    case 0x08: // LD (nn), SP
        break;
    case 0x09: // ADD HL, BC
        break;
    case 0x0A: // LD A, (BC)
        break;
    case 0x0B: // DEC BC
        break;
    case 0x0C: // INC C
        break;
    case 0x0D: // DEC C
        break;
    case 0x0E: // LD C, n
        break;
    case 0x0F: // RRCA
        break;
    case 0x10: // STOP
        break;
    case 0x11: // LD DE, nn
        break;
    case 0x12: // LD (DE), A
        break;
    case 0x13: // INC DE
        break;
    case 0x14: // INC D
        break;
    case 0x15: // DEC D
        break;
    case 0x16: // LD D, n
        break;
    case 0x17: // RLA
        break;
    case 0x18: // JR nn
        break;
    case 0x19: // ADD HL, DE
        break;
    case 0x1A: // LD A, (DE)
        break;
    case 0x1B: // DEC DE
        break;
    case 0x1C: // INC E
        break;
    case 0x1D: // DEC E
        break;
    case 0x1E: // LD E, n
        break;
    case 0x1F: // RRA
        break;
    case 0x20: // JR NZ, *
        break;
    case 0x21: // LD HL, nn
        break;
    case 0x22: // LD (HLI), A | LD (HL+), A | LDI (HL), A
        break;
    case 0x23: // INC HL
        break;
    case 0x24: // INC H
        break;
    case 0x25: // DEC H
        break;
    case 0x26: // LD H, n
        break;
    case 0x27: // DAA
        break;
    case 0x28: // JR Z, *
        break;
    case 0x29: // ADD HL, HL
        break;
    case 0x2A: // LD A, (HL+)
        break;
    case 0x2B: // DEC HL
        break;
    case 0x2C: // INC L
        break;
    case 0x2D: // DEC L
        break;
    case 0x2E: // LD L, n
        break;
    case 0x2F: // CPL
        break;
    case 0x30: // JR NC, *
        break;
    case 0x31: // LD SP, nn
        break;
    case 0x32: // LD (HLD), A | LD (HL-), A | LDD (HL), A
        break;
    case 0x33: // INC SP
        break;
    case 0x34: // INC (HL)
        break;
    case 0x35: // DEC (HL)
        break;
    case 0x36: // LD (HL), n
        break;
    case 0x37: // SCF
        break;
    case 0x38: // JR C, *
        break;
    case 0x39: // ADD HL, SP
        break;
    case 0x3A: // LD A, (HL-)
        break;
    case 0x3B: // DEC SP
        break;
    case 0x3C: // INC A
        break;
    case 0x3D: // DEC A
        break;
    case 0x3E: // LD A, n
        break;
    case 0x3F: // CCF
        break;
    case 0x40: // LD B, B
        break;
    case 0x41: // LD B, C
        break;
    case 0x42: // LD B, D
        break;
    case 0x43: // LD B, E
        break;
    case 0x44: // LD B, H
        break;
    case 0x45: // LD B, L
        break;
    case 0x46: // LD B, (HL)
        break;
    case 0x47: // LD B, A
        break;
    case 0x48: // LD C, B
        break;
    case 0x49: // LD C, C
        break;
    case 0x4A: // LD C, D
        break;
    case 0x4B: // LD C, E
        break;
    case 0x4C: // LD C, H
        break;
    case 0x4D: // LD C, L
        break;
    case 0x4E: // LD C, (HL)
        break;
    case 0x4F: // LD C, A
        break;
    case 0x50: // LD D, B
        break;
    case 0x51: // LD D, C
        break;
    case 0x52: // LD D, D
        break;
    case 0x53: // LD D, E
        break;
    case 0x54: // LD D, H
        break;
    case 0x55: // LD D, L
        break;
    case 0x56: // LD D, (HL)
        break;
    case 0x57: // LD D, A
        break;
    case 0x58: // LD E, B
        break;
    case 0x59: // LD E, C
        break;
    case 0x5A: // LD E, D
        break;
    case 0x5B: // LD E, E
        break;
    case 0x5C: // LD E, H
        break;
    case 0x5D: // LD E, L
        break;
    case 0x5E: // LD E, (HL)
        break;
    case 0x5F: // LD E, A
        break;
    case 0x60: // LD H, B
        break;
    case 0x61: // LD H, C
        break;
    case 0x62: // LD H, D
        break;
    case 0x63: // LD H, E
        break;
    case 0x64: // LD H, H
        break;
    case 0x65: // LD H, L
        break;
    case 0x66: // LD H, (HL)
        break;
    case 0x67: // LD H, A
        break;
    case 0x68: // LD L, B
        break;
    case 0x69: // LD L, C
        break;
    case 0x6A: // LD L, D
        break;
    case 0x6B: // LD L, E
        break;
    case 0x6C: // LD L, H
        break;
    case 0x6D: // LD L, L
        break;
    case 0x6E: // LD L, (HL)
        break;
    case 0x6F: // LD L, A
        break;
    case 0x70: // LD (HL), B
        break;
    case 0x71: // LD (HL), C
        break;
    case 0x72: // LD (HL), D
        break;
    case 0x73: // LD (HL), E
        break;
    case 0x74: // LD (HL), H
        break;
    case 0x75: // LD (HL), L
        break;
    case 0x76: // HALT
        break;
    case 0x77: // LD (HL), A
        break;
    case 0x78: // LD A, B
        break;
    case 0x79: // LD A, C
        break;
    case 0x7A: // LD A, D
        break;
    case 0x7B: // LD A, E
        break;
    case 0x7C: // LD A, H


        break;
    case 0x7D: // LD A, L
        break;
    case 0x7E: // LD A, (HL)
        break;
    case 0x7F: // LD A, A
        break;
    case 0x80: // ADD A, B
        break;
    case 0x81: // ADD A, C
        break;
    case 0x82: // ADD A, D
        break;
    case 0x83: // ADD A, E
        break;
    case 0x84: // ADD A, H
        break;
    case 0x85: // ADD A, L
        break;
    case 0x86: // ADD A, (HL)
        break;
    case 0x87: // ADD A, A
        break;
    case 0x88: // ADC A, B
        break;
    case 0x89: // ADC A, C
        break;
    case 0x8A: // ADC A, D
        break;
    case 0x8B: // ADC A, E
        break;
    case 0x8C: // ADC A, H
        break;
    case 0x8D: // ADC A, L
        break;
    case 0x8E: // ADC A, (HL)
        break;
    case 0x8F: // ADC A, A
        break;
    case 0x90: // SUB A, B
        break;
    case 0x91: // SUB A, C
        break;
    case 0x92: // SUB A, D
        break;
    case 0x93: // SUB A, E
        break;
    case 0x94: // SUB A, H
        break;
    case 0x95: // SUB A, L
        break;
    case 0x96: // SUB A, (HL)
        break;
    case 0x97: // SUB A, A
        break;
    case 0x98: // SBC A, B
        break;
    case 0x99: // SBC A, C
        break;
    case 0x9A: // SBC A, D
        break;
    case 0x9B: // SBC A, E
        break;
    case 0x9C: // SBC A, H
        break;
    case 0x9D: // SBC A, L
        break;
    case 0x9E: // SBC A, (HL)
        break;
    case 0x9F: // SBC A, A
        break;
    case 0xA0: // AND B
        break;
    case 0xA1: // AND C
        break;
    case 0xA2: // AND D
        break;
    case 0xA3: // AND E
        break;
    case 0xA4: // AND H
        break;
    case 0xA5: // AND L
        break;
    case 0xA6: // AND (HL)
        break;
    case 0xA7: // AND A
        break;
    case 0xA8: // XOR B
        break;
    case 0xA9: // XOR C
        break;
    case 0xAA: // XOR D
        break;
    case 0xAB: // XOR E
        break;
    case 0xAC: // XOR H
        break;
    case 0xAD: // XOR L
        break;
    case 0xAE: // XOR (HL)
        break;
    case 0xAF: // XOR A
        break;
    case 0xB0: // OR B
        break;
    case 0xB1: // OR C
        break;
    case 0xB2: // OR D
        break;
    case 0xB3: // OR E
        break;
    case 0xB4: // OR H
        break;
    case 0xB5: // OR L
        break;
    case 0xB6: // OR (HL)
        break;
    case 0xB7: // OR A
        break;
    case 0xB8: // CP B
        break;
    case 0xB9: // CP C
        break;
    case 0xBA: // CP D
        break;
    case 0xBB: // CP E
        break;
    case 0xBC: // CP H
        break;
    case 0xBD: // CP L
        break;
    case 0xBE: // CP (HL)
        break;
    case 0xBF: // CP A
        break;
    case 0xC0: // RET NZ
        break;
    case 0xC1: // POP BC
        break;
    case 0xC2: // JP NZ, nn
        break;
    case 0xC3: // JP nn
        break;
    case 0xC4: // CALL NZ, nn
        break;
    case 0xC5: // PUSH BC
        break;
    case 0xC6: // ADD A, n
        break;
    case 0xC7: // RST 00H
        break;
    case 0xC8: // RET Z
        break;
    case 0xC9: // RET
        break;
    case 0xCA: // JP Z, nn
        break;
    case 0xCB: // PREFIX CB
        break;
    case 0xCC: // CALL Z, nn
        break;
    case 0xCD: // CALL nn
        break;
    case 0xCE: // ADC A, n
        break;
    case 0xCF: // RST 08H
        break;
    case 0xD0: // RET NC
        break;
    case 0xD1: // POP DE
        break;
    case 0xD2: // JP NC, nn
        break;
    case 0xD3: // OUT (n), A
        break;
    case 0xD4: // CALL NC, nn
        break;
    case 0xD5: // PUSH DE
        break;
    case 0xD6: // SUB A, n
        break;
    case 0xD7: // RST 10H
        break;
    case 0xD8: // RET C
        break;
    case 0xD9: // EXX
        break;
    case 0xDA: // JP C, nn
        break;
    case 0xDB: // IN A, (n)
        break;
    case 0xDC: // CALL C, nn
        break;
    case 0xDD: // IX
        break;
    case 0xDE: // SBC A, n
        break;
    case 0xDF: // RST 18H
        break;
    case 0xE0: // LDH (n), A | LD (FF00 + n), A
        break;
    case 0xE1: // POP HL
        break;
    case 0xE2: // LDH (C), A | LD (FF00 + C), A
        break;
    case 0xE3: // EX (SP), HL
        break;
    case 0xE4: // 
        break;
    case 0xE5: // PUSH HL
        break;
    case 0xE6: // AND n
        break;
    case 0xE7: // RST 20H
        break;
    case 0xE8: // ADD SP, e
        break;
    case 0xE9: // JP (HL)
        break;
    case 0xEA: // LD (nn), A
        break;
    case 0xEB: // 
        break;
    case 0xEC: // 
        break;
    case 0xED: // 
        break;
    case 0xEE: // XOR n
        break;
    case 0xEF: // RST 28H
        break;
    case 0xF0: // LDH A, (n) | LD A, (FF00 + n)
        break;
    case 0xF1: // POP AF
        break;
    case 0xF2: // LDH A, (C) | LD A, (FF00 + C)
        break;
    case 0xF3: // DI
        break;
    case 0xF4: // 
        break;
    case 0xF5: // PUSH AF
        break;
    case 0xF6: // OR n
        break;
    case 0xF7: // RST 30H
        break;
    case 0xF8: // LD HL, SP + e
        break;
    case 0xF9: // LD SP, HL
        break;
    case 0xFA: // LD A, (nn)
        break;
    case 0xFB: // EI
        break;
    case 0xFC: // 
        break;
    case 0xFD: // IY
        break;
    case 0xFE: // CP n
        break;
    case 0xFF: // RST 38H
        break;
    default:
       cerr << "Error: Unknown opcode 0x" << std::hex << std::setw(4) << std::setfill('0') << opcode << "\n";
            break;
    }

   
}

//