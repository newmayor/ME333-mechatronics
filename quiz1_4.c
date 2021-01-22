#include <stdio.h>  
int main(){
    int count = 0, n = 0, check_prime = 2, j;

    while(count <10) {
        j = 1; //this will be the diviser 

        while(j <= check_prime){ //check_prime is the number we're checking for prime
            if (check_prime%j == 0 ){
                n++;
                j++;
            }
        }
        if (j == check_prime){
            printf("%d is a prime number\r\n", check_prime);
            count++;
        }
        check_prime++;
    }


}