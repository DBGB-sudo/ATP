//4. Transposicao de uma Matriz:

#include <stdio.h>

int main() {
    int matriz[2][2];
    int linha, coluna;

    printf("Preencha a matriz 2x2:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 2x2:\n");
    for(int i2 = 0; i2 < 2; i2++) {
         printf("\n");
        for(int j2 = 0; j2 < 2; j2++) {
            printf("%d ", matriz[i2][j2]);
        }
    }

    printf("\n\nMatriz transposta 2x2:\n");
    for(int i3 = 0; i3 < 2; i3++) {
        printf("\n");
        for(int j3 = 0; j3 < 2; j3++) {
            printf("%d ", matriz[j3][i3]);
        }
    }

    return 0;
}
