#include <stdio.h>

typedef struct { 
    unsigned int sampleValues[5]; 
    unsigned int serialNumber; 
} myData; 

int main() {
    myData p;
    myData * pp;
    pp = &p;



    int i;

    pp->sampleValues[0] = 15;
    pp->sampleValues[1] = 16;
    pp->sampleValues[2] = 17;
    pp->sampleValues[3] = 18;
    pp->sampleValues[4] = 19;
    
    for (i = 0; i<= 4; i++){
        
        printf("element %d of struct is %d\r\n", i, pp->sampleValues[i]);
    }
    
    p.serialNumber = 15;
    printf("p.serialNumber = %d\r\n", p.serialNumber);
}
