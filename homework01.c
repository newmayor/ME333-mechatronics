#include <stdio.h>
int main(void) {
    /*
    int a=2, b=3, c;
    float d=1.0, e=3.5, f;
    */

    /*problem 22*/
    /*
    printf("Problem 22: \n");
    printf("(a) f = %2.2d/%2.2d, returns: %2.2d \n", a, b, a/b);
    printf("(b) f = ((float)%2.2d)/%2.2d , returns: %2.2f \n", a, b, ((float) a)/b);
    printf("(c) f = (float)(%2.2d/%2.2d) , returns: %2.2f \n", a, b, (float) (a/b));
    printf("(d) c = %2.2f/%2.2f, returns: %2.2f \n", e, d, e/d);
    printf("(e) c = (int)(%2.2f/%2.2f) , returns: %2.2d \n", e, d, (int) (e/d));
    printf("(f) c = ((int)%2.2f)/%2.2f, returns: %2.2f \n", e, d, ((int) e)/d);
    printf("\n\n\n");
    */

    int x[4] = {4, 3, 2, 1};
    /*problem 30*/
    printf("Problem 30: \n");
    printf("(a) x[1] = %1d \n", x[1]);
    printf("(b) *x = %1d \n", *x);
    printf("(c) *(x+2) = %1d \n", *(x+2));
    printf("(d) (*x)+2 = %1d \n", (*x)+2);
    /*printf("(e) *x[3] = %1d \n", *x[3]);*/  /*this gives error*/
    printf("(f) x[4] = %1d \n", x[4]);
    printf("(g) *(&(x[1])+1) = %1d \n\n\n", *(&(x[1])+1));
    
    int i, k=6;
    /*problem 31*/
    printf("Problem 31: \n");
    printf("5>1: %2d; this is just pointing 5 to value of 1 \n\n", 5>1);
    printf("3*(5>1): %2d; multiply 1 by 3 \n\n", 3*(5>1));
    printf("3*(5>1) + (k=2) + (k==6): %2d + %2d +%2d = %2d; \nMEANING: 3*1 + 'set k=2 temporarily' + 'is k = to 6 boolean' \n\n", 3*(5>1), (k=2), (k==6), 3*(5>1) + (k=2) + (k==6));
    
    unsigned char a=0x0D, b=0x03, c;
    /*problem 32*/
    printf("Problem 32: \n");
    printf("(a) c= ̃a: %x \n", ~a);    //(a)
    printf("(b) c=a&b: %x \n", a&b); //(b)
    printf("(c) c=a|b: %x \n", a|b); //(c)
    printf("(d) c=aˆb: %x \n", a^b); //(d)
    printf("(e) c=a>>3: %x \n", a>>3);//(e)
    printf("(f) c=a<<3: %x \n", a<<3);//(f)
    printf("(g) c&=b: %x \n\n\n", c&=b);    //(g)

    int q;
    /*problem 34*/
    printf("Problem 34: \n");
    printf("ASCII from 33 to 127: \n");
    for ( q = 33; q < 128; q++)
    {
        /* code */
        printf("%d:  %c\n", q, q); 
        
    }
    
        
}