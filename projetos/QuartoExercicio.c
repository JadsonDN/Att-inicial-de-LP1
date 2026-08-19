/*
Conversão de Temperatura: Escreva um programa que converta uma temperatura fornecida
em graus Celsius para Fahrenheit e vice-versa.

*/

#include <stdio.h>

int main() {
    int a;
    char b;
    scanf("%c", &b);
    if(b=='C'){
        scanf("%d", &a);
        a = (a * 9/5) + 32;
    }
    else if(b=='F'){
        scanf("%d", &a);
        a = (a - 32) * 5/9;
    }
    printf("%d", a);
    return 0;
}