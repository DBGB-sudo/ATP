//9) Crie uma função que transforma todos os caracteres de uma string em maiúsculos.

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[16];
    
    printf("Digite uma palavra de até 15 caracteres: ");
    scanf("%15s", Nome); 

    for(int c = 0; Nome[c]; c++)
        Nome[c] = toupper(Nome[c]);

    printf("%s\n", Nome);
    return 0;
}
