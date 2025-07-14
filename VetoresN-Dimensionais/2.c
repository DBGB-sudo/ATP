//2. Soma de Elementos de uma Matriz 2D:

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
    
    printf("%d %d %d\n%d %d %d" , A[0][0], A[0][1], A[0][2], A[1][0], A[1][1], A[1][2]);
    printf("\n\nSoma: %d", s);
    
    return 0;
}
