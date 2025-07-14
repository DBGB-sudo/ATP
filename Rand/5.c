//5) Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as posições com valor zero. Para isso, todos os elementos a frente do valor zero, devem ser movidos uma posição para trás no vetor.

#include <stdio.h>

int main(){
int A[15], c, zeros=0;

    for(c=0; c<15; c++){
        printf("Digite o %dº valor: ", c+1);
        scanf("%d", &A[c]);
    }

    for(c=0; c<15; c++){
        if(A[c]==0){
            zeros++;
            for(c;c!=0;c--){
            A[c]=A[c-1];
            
            }
        }
    }

    for(zeros;zeros!=0;zeros--){
        A[zeros-1]=0;
    }    
    
    printf("Vetor compactado: ");
    for(c=0; c<15; c++){
        printf("%d ", A[c]);
    }

    return 0;
}
