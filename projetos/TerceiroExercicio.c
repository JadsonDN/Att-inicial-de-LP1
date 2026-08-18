/*
Soma de Números em um Array: Faça um programa que leia 5 números inteiros, 
armazene-os em um array e calcule a soma total desses números.

*/
#include <stdio.h>
int main() {
    int numeros[5], soma = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&numeros[i]);
        soma += numeros[i];
    }
    
    printf("Soma total: %d", soma);
    return 0;
}