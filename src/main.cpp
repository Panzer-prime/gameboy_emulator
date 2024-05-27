#include <iostream>
#include "cstdlib"
#include "cpu.h"

using namespace std;




int main(){
    CPU emulator = CPU();
    char x;
    if (!emulator.loadRom("../rom/Tetris.gb"))  exit(EXIT_FAILURE);
    int i = 0; 
    while (true){
        if(x == 'q') break;
        
        emulator.emulateCycle();
    }
    return 1;
}