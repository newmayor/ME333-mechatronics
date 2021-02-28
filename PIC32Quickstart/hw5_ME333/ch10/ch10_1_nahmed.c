

AD1CON1 = 0x000080E6; //0000 0000 0000 0000 1000 0000 1110 0110;  1000 enable ADC by bit <15> = 1, 0000 for bits <11:8> gives default 16-bit u-int data output, 1110 specifies automatic conversion process, 0110 enables manual sampling and SHA sampling for when manual sampling is used.

AD1CON3bits.SAMC = 0x0041; // set Tad = 65ns = 0x41
