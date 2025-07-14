/*7) Faça um programa que:
a) Crie e leia uma string (máximo de 15 letras);
b) Inverta esta palavra, sem modificar a original;
c) Ao final do programa, devem-se ter duas palavras: a original (str) e a
invertida. Imprima-as.*/

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[16], Inverso[16];
    int d=0, c;

    printf("Digite uma palavra de até 15 caracteres: ");
    scanf("%15s", Nome); 

    for(c=strlen(Nome)-1; c>=0; c--){//tem que ser -1 por causa do /0
        Inverso[d]=Nome[c];
        d++;
    }
    
     printf("%s\n",Nome);
     printf("%s\n",Inverso);
    return 0;
}
