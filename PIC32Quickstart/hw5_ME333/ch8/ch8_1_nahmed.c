

T3CON = 0x0110;     // prescaler of 1:64
PR3 = (16000/(1250000*12.5)) - 1; // if prescaler is 1:64 then N = 1,250,000. T = (P + 1) * N * 12.5 where T is 16ms (16000ns)