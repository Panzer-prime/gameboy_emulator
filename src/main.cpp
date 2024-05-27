#include <iostream>
#include "cstdlib"
#include "cpu.h"

using namespace std;

CPU emulator;


int main(){
    char x; 
    cout<< "write q to exit\n";
    if (!emulator.loadRom("rom file "))  exit(EXIT_FAILURE);
    
    while (true){
        cin>>x;
        if(x == 'q') break;

        emulator.emulateCycle();
    }
    return 1;
}