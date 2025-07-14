//6. Soma de Duas Matrizes:

#include <stdio.h>

int main() {
    int matriz[2][2];
    int matriz2[2][2];
    int j, i;

//MATRIZ 1

    printf("Preencha a matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
    }

//MATRIZ 2
    printf("\nPreencha a matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nSegunda matriz 2x2:\n");
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz2[i][j]);
        }
    }

//PRINTAR MATRIZ SOMA
    printf("\nMatriz soma:\n");
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]+matriz2[i][j]);
        }
    }

    return 0;
}
