//7. Multiplicacao de Matrizes 2x2:

#include <stdio.h>

int main() {
    int matriz[2][2];
    int matriz2[2][2];
    int matriz3[2][2];
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
    printf("\n\nPreencha a segunda matriz 2x2:\n");
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


 //PRINTAR MATRIZ MULTIPLIÇÃO

    matriz3[0][0] = (matriz[0][0]*matriz2[0][0])+(matriz[0][1]*matriz2[1][0]);
    matriz3[0][1] = (matriz[0][0]*matriz2[0][1])+matriz[0][1]*matriz2[1][1];
    matriz3[1][0] = (matriz[1][0]*matriz2[0][0])+matriz[1][1]*matriz2[1][0];
    matriz3[1][1] = (matriz[1][0]*matriz2[0][1])+matriz[1][1]*matriz2[1][1];
    
    printf("\n\nMatriz multiplicação:\n");
    for(i = 0; i < 2; i++) {
        printf("\n");
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz3[i][j]);


        }
    }

    return 0;
}
