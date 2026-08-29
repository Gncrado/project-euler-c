#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

unsigned long long int mynumber = 600851475143;
unsigned long long int primefactor;

int controlPrimeFactor(int possibleNumber){
	int j=2;
	while(j <= possibleNumber/j){
		
		if(possibleNumber%j == 0){
			return 0;
		}
		else{
			j+=1;			
		}
	}
	return 1;
}

int main(void){
	
	bool k;
	int i = 3;
	
	while(i <= mynumber/i){
		if(mynumber%i == 0){
			k = controlPrimeFactor(i);
			if(k == 1){
				printf("This number is a prime factor: %llu\n", i);
				primefactor = i;	
			}
		}
		i+=2;				
	}		
	printf("%d",primefactor);
		
	return 0;
}
