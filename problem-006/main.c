#include <stdio.h>
#include <stdint.h>

unsigned long long int squareofSum, sum, difference, sumofSquares;
int i;

int main(void){

    for(i = 1; i<=100; i++){
        sumofSquares += i*i;
        sum += i;
    }
    squareofSum = sum * sum;
    difference = squareofSum-sumofSquares;

    printf("Difference = %llu" , difference);

    return 0;
}