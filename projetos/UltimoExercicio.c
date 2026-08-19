/*
Verificação de Número primo: Desenvolva um programa que
leia um número inteiro e determine se ele é um número primo ou não
*/

#include <stdio.h>


int main() {
    int primo;
    
    scanf("%d", &primo);
    if(primo<=1){
        printf("Nao e primo!");
        return 0;
    }
	for(int i=2; i*i <=primo;i++){        
		if(primo % i==0){            
        printf("Nao e primo!");
        return 0;
        }
	}    
    printf("E primo!");
    return 0;
}