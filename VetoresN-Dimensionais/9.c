//9. Matriz Identidade:

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

 //PRINTAR IDENTIDADE

    if(matriz[0][0] == 1 && matriz[0][1] == 0 && matriz[1][0] == 0 && matriz[1][1] == 1)
        printf("\n\nMatriz é identidade");
    else
        printf("\n\nMatriz não é identidade");

    return 0;
}
