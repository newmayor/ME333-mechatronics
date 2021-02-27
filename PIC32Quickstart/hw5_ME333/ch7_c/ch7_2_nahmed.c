

AD1PCFG = 0x000000EE; // 0000 0000 0000 0000 0000 0000 1110 1110 for pins <31:0>
TRISB = 0x0000FFF9; // 0000 0000 0000 0000 1111 1111 1111 1001 for pins <16:0>, only pins 1 and 2 are outputs, all rest are inputs. 
ODCB = 0x00000004; //  0000 0000 0000 0000 0000 0000 0000 0100 makes pin 2 as open drain and the rest default "typical buffer"
CNPUE = 0x00000010; // 0000 0000 0000 0000 0000 0000 0001 0000 enables internal pull-up resistor for pin 4 only
CNCONbits.ON = 1;
CNEN = 0x00000008; // enable change notification register only at pin 3