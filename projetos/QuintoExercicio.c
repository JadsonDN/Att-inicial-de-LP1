/*
Contagem de Caracteres em uma String: Crie um programa que leia uma string e conte quantos 
caracteres (incluindo espaços) ela possui.

*/

#include <stdio.h>
#include <string.h>

int main() {
    int totalCaracteres;
    char str[100];
    scanf("%[^\n]s", str);
    for(int i=0; i<strlen(str); i++){
        totalCaracteres++;
    }
    printf("Total de caracteres: %d", totalCaracteres);
    return 0;
}