//10. Determinante de uma Matriz 2x2:

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

 //PRINTAR DETERMINANTE

    printf("\nO determinante da matriz 2x2 é: %d", (matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]));
    return 0;
}
