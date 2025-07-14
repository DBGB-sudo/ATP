//6) Implemente um programa que leia duas strings e concatene-as.

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[25], A[25];
    int c=0;

    printf("Digite uma palavra de até 24 caracteres: ");
    scanf("%24s", Nome); 

    printf("Digite uma segunda palavra de até 24 caracteres: ");
    scanf("%24s", A); 

    strcat(Nome, A);
    
    printf("%s", Nome);
    return 0;
}
