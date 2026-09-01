#include <stdio.h>

int main(void){
    int j, k, l;
    unsigned int i, isquare;
    unsigned long long int total = 1;
    for(i = 3; i<=1001; i+=2){
        isquare = i * i;
        j = i-1;
        total += isquare + (isquare - j) + (isquare - 2*j) + (isquare - 3*j);
    }

    printf("%llu", total);
    return 0;
}