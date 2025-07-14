//2) Ler nome via teclado, o sexo e idade. Imprimir estes dados.

#include <stdio.h>
#include <string.h>

int main() {
    char Nome[25], Gen[20];
    int idade;

    printf("Digite seu nome: ");
    scanf("%24s", Nome); 


    while (strcmp(Gen, "masculino") != 0 && strcmp(Gen, "feminino") != 0 && strcmp(Gen, "não") != 0 && strcmp(Gen, "nao") != 0){
        printf("\nDigite seu sexo entre:\nMasculino\nFeminino\nNão identificar:\n");
        scanf("%19s", Gen);

        for(int i = 0; Gen[i]; i++) {
            Gen[i] = tolower(Gen[i]);
        }
    }
  

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nFicha do usuario:\n\nNome: %s\nSexo: %s\nIdade: %d\n", Nome, Gen, idade);

    return 0;
}
