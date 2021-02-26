#include "NU32.h"
#define CORE_TICKS 4000000  // 40 M ticks (one second)


int main(void) {
    NU32_Startup(); // turns on interrupts by default

    __builtin_disable_interrupts();     //disable interrupts at CPU
    __CP0_SET_COMPARE(CORE_TICKS);      //CPO_COMPARE register set to 40 M



}