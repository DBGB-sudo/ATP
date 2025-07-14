//6) Faça um programa que calcule o desvio padrão de um vetor 'v' contendo n= 10 números, onde 'm' ́é a média do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int c;
    float m=0, V[10], som=0;

    for(c=0; c<10; c++){
        printf("Digite o %dº número: ", c+1);
        scanf("%f", &V[c]);
        m += V[c];
    }

    m = m/10;
    
    for(c=0; c<10; c++){
        som = som + pow((V[c]-m), 2);
    }

    printf("O desvio padrão é: %.2f", sqrt(som/10));
    return 0;
}
