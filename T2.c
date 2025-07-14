#include <stdio.h>

int main(){

    int A[5][5], x=1, y=1, total=0, c=0, ct=0, V[25];

    A[0][0] = 0;
    A[0][1] = 15;
    A[0][2] = 30;
    A[0][3] = 5;
    A[0][4] = 12;

    A[1][0] = 15;
    A[1][1] = 0;
    A[1][2] = 10;
    A[1][3] = 17;
    A[1][4] = 28;

    A[2][0] = 30;
    A[2][1] = 10;
    A[2][2] = 0;
    A[2][3] = 3;
    A[2][4] = 11;

    A[3][0] = 05;
    A[3][1] = 17;
    A[3][2] = 3;
    A[3][3] = 0;
    A[3][4] = 80;

    A[4][0] = 12;
    A[4][1] = 28;
    A[4][2] = 11;
    A[4][3] = 80;
    A[4][4] = 0;

    while(x!=0 || y!=0){

        printf("Escolha a primeira cidade\n");
        scanf("%d", &x);

        printf("Escolha a segunda cidade\n");
        scanf("%d", &y);

        if(A[x][y] < 9)
            printf("A distancia entre as duas cidades é: 0%d\n", A[x][y]);

        else
             printf("A distancia entre as duas cidades é: %d km\n\n", A[x][y]);
        total += A[x][y];
        V[c]=A[x][y];
        c++, ct++; 
    }

    printf("\nTotal percorrido:");
    for(c=0; c<=ct; c++){
        printf(" %d", V[c]);
        printf(" + ");
    }
    printf(" = %d km", total);
    return 0;
}
