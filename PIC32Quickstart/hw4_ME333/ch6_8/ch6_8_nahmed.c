#include "NU32.h"
#define CORE_TICKS 4000000  // 40 M ticks (one second)


int main(void) {
    NU32_Startup(); // turns on interrupts by default

    __builtin_disable_interrupts();     //disable all interrupts at CPU
    __CP0_SET_COMPARE(CORE_TICKS);      //CPO_COMPARE register set to 40 M
    IPC2bits.CTIP = 5;                  //Timer2 interrupt priority 5. 
    IPC2bits.CTIS = 1;                  // Timer2 subpriority is 2
    IFS0bits.CTIF = 0;                  // set Timer2 interrupt flag to 0
    IEC0bits.CTIE = 1;                  // enable Timer2 interrupt



    IPC8bits.CTIP = 6;                  //RTCC interrupt priority 6. IPC8 is for RTCC and .CTIP sets the priority bit
    IPC8bits.CTIS = 1;                  // RTCC subpriority is 1. CTIS sets the subpriority bit 
    IFS1bits.CTIF = 0;                  // set RTCC interrupt flag to 0. CTIF sets the flag bit
    IEC0bits.CTIE = 1;                  // enable RTCC interrupt. CTIE sets the enable bit


    IPC12bits.CTIP = 7;                  // UART4 interrupt priority 12. IPC12 is for UART4 and .CTIP sets the priority bit
    IPC12bits.CTIS = 3;                  // UART4 subpriority is 3. CTIS sets the subpriority bit 
    IFS2bits.CTIF = 0;                  // set UART4 interrupt flag to 0. CTIF sets the flag bit
    IEC2bits.CTIE = 1;                  // enable UART4 interrupt. CTIE sets the enable bit


    IPC2bits.CTIP = 3;                  // INT2 interrupt priority 12. IPC2 is for INT2 and .CTIP sets the priority bit
    IPC2bits.CTIS = 2;                  // INT2 subpriority is 3. CTIS sets the subpriority bit 
    IFS0bits.CTIF = 0;                  // set INT2 interrupt flag to 0. CTIF sets the flag bit
    IEC0bits.CTIE = 1;                  // enable INT2 interrupt. CTIE sets the enable bit


}