//2) Crie um programa em C que armazene 10 valores inteiros (via teclado) em dois vetores de 5 posições e, em seguida, mostre na tela a soma de cada um dos índices dos vetores em um terceiro vetor:

#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[5], c;

    for (c = 0; c < 5; c++){
        printf("Digite o %dº valor do 1º conjunto: ", c+1);
        scanf("%d", &v1[c]);
    }
        

        for (c = 0; c < 5; c++){
            printf("Digite o %dº valor do 2º conjunto: ", c+1);
            scanf("%d", &v2[c]);
        }

    printf("Conjunto soma é igual a: %d %d %d %d %d", v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2], v1[3] + v2[3], v1[4] + v2[4]);
    return 0;
}
