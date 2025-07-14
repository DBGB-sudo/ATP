//8) Strings que gaguejam.... Crie uma função que duplique cada caractere da string.

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[16];
    
    printf("Digite uma palavra de até 15 caracteres: ");
    scanf("%15s", Nome); 

    for(int e=0; e<strlen(Nome)*2; e++)
        for(int d=0; d<2; d++)
            printf("%c", Nome[e]);
    
    return 0;
}
