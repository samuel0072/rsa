#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned long long int a, mod, mult=1, terminou=1, k, soma=0;
    mod =1511815454654848481;
    a = 1511815454654848480;
    k = mod+1; 
    soma = k;
    while(terminou){
        if(soma%a == 0){
            terminou = 0;
        }
        soma = soma+mod;    
    }
    printf("%llu\n %llu\n %llu", soma-mod, (soma-mod)%mod, (soma-mod)/a);
    
	return 0;
}