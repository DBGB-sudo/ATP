//8. Soma dos Elementos de Linhas e Colunas:

#include <stdio.h>

int main(){
int A[2][3], x=1, y=1, c=1, s=0;

    for(c;c<7;c++){
        printf("Digite o valor da posição %d: ", c);
        scanf("%d", &A[x-1][y-1]);
        s+=A[x-1][y-1];
        if(x<=y)
            y++;
        else
            x++;
    }

//PRINT MATRIZ

    printf("\n%d %d %d\n%d %d %d" , A[0][0], A[0][1], A[0][2], A[1][0], A[1][1], A[1][2]);

//PRINT SOMAS

    printf("\n\nSoma linha 1: %d", A[0][0]+A[0][1]+A[0][2]);
    printf("\nSoma linha 2: %d", A[1][0]+A[1][1]+A[1][2]);

    printf("\nSoma coluna 1: %d", A[0][0]+A[1][0]);
    printf("\nSoma coluna 2: %d", A[0][1]+A[1][1]);
    printf("\nSoma coluna 3: %d", A[0][2]+A[1][2]);

    return 0;
}
