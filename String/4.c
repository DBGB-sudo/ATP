//4) Receba uma palavra e imprima de trás para frente.

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[25];

    printf("Digite uma palavra de até 24 caracteres: ");
    scanf("%24s", Nome); 

    for(int c=strlen(Nome); c>=0; c--){
        printf("%c", Nome[c]);
    }
    return 0;
}
