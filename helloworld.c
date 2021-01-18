#include <stdio.h>
int main(void)  {
    unsigned char i = 60;
    unsigned char j = 80;
    unsigned char k = 200;
    
    printf("sum = %4d + %4d returns: %4d\n", i, j, i+j);
    printf("sum = %4d + %4d returns: %4d\n", i, k, i+k);
    printf("sum = %4d + %4d returns: %4d\n", j, k, j+k);
    return 0;
}