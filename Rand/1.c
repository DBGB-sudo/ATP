//1) Crie um programa em C que armazene 6 valores inteiros (via teclado) e, em seguida, mostre na tela os valores lidos.

#include <stdio.h>

int main() {
    int dig[6];

    printf("Digite 6 numeros inteiros(Ex.:1 2 3 4 5 6): ");
    scanf(" %d %d %d %d %d %d", &dig[0], &dig[1], &dig[2], &dig[3], &dig[4], &dig[5]);

    printf("\nOs numeros digitados foram: %d %d %d %d %d %d", dig[0], dig[1], dig[2], dig[3], dig[4], dig[5]);
    return 0;
}
