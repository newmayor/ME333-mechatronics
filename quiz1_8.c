#include <stdio.h>

int main(void) {
    float num;
    char str;
    int i;

    printf("enter a string and a number: \r\n");
    scanf("%s %d", &str, &num);

    if (num >= 1 && num <= 4)
    {
        /* code */
        printf("%s:  %c\n", str, str + 4);
    }
    else
    {
        printf("please a number between 1 and 4\r\n");
    }
    
    
}