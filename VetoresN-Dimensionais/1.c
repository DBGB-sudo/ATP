//1. Criacao de Vetor 2D:

#include <stdio.h>

int main(){
int A[2][2], x=1, y=1, c=1;

    for(c;c<5;c++){
        printf("Digite o valor da posição %d: ", c);
        scanf("%d", &A[x-1][y-1]);
        if(x<=y)
            y++;
        else
            x++;
    }
    
    printf("%d %d\n%d %d", A[0][0], A[0][1], A[1][0], A[1][1]);
    
    
    return 0;
}
