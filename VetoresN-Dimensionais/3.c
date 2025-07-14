//3. Acesso a Elementos Especificos:

#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, coluna;

    printf("Preencha a matriz 3x3:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz 3x3:\n");
    for(int i2 = 0; i2 < 3; i2++) {
        printf("\n");
        for(int j2 = 0; j2 < 3; j2++) {
            printf("%d ", matriz[i2][j2]);
        }
    }

    printf("\nDigite a linha e a coluna que deseja verificar: ");
    printf("\nInforme a linha (1 a 3): ");
    scanf("%d", &linha);

    printf("Informe a coluna (1 a 3): ");
    scanf("%d", &coluna);

    printf("Elemento na posicao [%d][%d]: %d\n", linha, coluna, matriz[linha-1][coluna-1]);
    return 0;
}
