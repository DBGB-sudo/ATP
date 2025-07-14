//5. Multiplicacao por Escalar:

#include <stdio.h>

int main() {
    int matriz[2][2];
    int e, j, i;

    printf("Preencha a matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Escolha um valor para multiplicar por escalar:");
    scanf(" %d", &e);

    printf("\nMatriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
    }

    printf("\n\nMatriz 2x2 escalar por %d:\n", e);
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]*e);
        }
    }

    return 0;
}
