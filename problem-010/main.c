#include <stdio.h>

int main(void){
    unsigned int i,j;
    unsigned long long int total = 2;

    for(i = 3; i<2000000; i+=2){
        total+=i;
        for(j = 3; j <= i/j; j+=2){
            if(i%j==0){
                total-=i;
                break;
            }
        }
    }

    printf("%llu", total);

    return 0;
}