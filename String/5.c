//5) Crie um programa que compara duas strings lidas via teclado.

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[25], A[25];
    int c=0;

    printf("Digite uma palavra de até 24 caracteres: ");
    scanf("%24s", Nome); 

    printf("Digite uma segunda palavra de até 24 caracteres: ");
    scanf("%24s", A); 

    if(strcmp(Nome, A) == 0)
        printf("Strings iguais");

    else
        printf("Strings diferentes");
    return 0;
}
