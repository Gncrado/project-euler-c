#include <stdio.h>

int main(void){

    unsigned long long int i, j;
    //start from 1 because 2 is the first prime number.
    int counter = 1;
    unsigned long long int primeNumber;
    
    //check only odd numbers, since 2 is the only even prime number.
    for(i = 3; ; i+=2){
            //temporarily assume that the current number is prime.
            counter++;                              
            primeNumber = i;

            //search for an odd divisor only up to the square root of i.
            for(j = 3; j <= i/j; j+=2){
                if(i%j==0){
                    //a division was found, so undo the previous increment.
                    counter--;
                    break;
                    //counter+=0;
                }else{
                //bos
                }
            }
            
            //stop when the 10001st prime number has been found.
            if(counter==10001){
                printf("10001st Prime Number is : %llu", primeNumber);
                break;
            }
        }
        
    return 0;    
}