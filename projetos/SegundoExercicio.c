/*Cálculo de a: Crie um programa que calcule e imprima o a de um número inteiro
fornecido pelo usuário.
*/
#include <stdio.h>

int main() {
    int a,result=0,fatorial=0;
    scanf("%d", &a);
    result = a;
    fatorial = a;
    printf("Fatorial de %d: ", a);
    for(int i=0;i<a;i++){
        result--;
        if(result<1){
            break;
        }
        fatorial = fatorial * (result);
    }
    printf("%d", fatorial);
    return 0;
}