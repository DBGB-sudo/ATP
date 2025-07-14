//3) Ler nome via teclado, o sexo e idade. Imprimir estes dados se sexo for feminino e idade menor que 25. Imprime o nome da pessoa e a palavra OK, caso contrário imprimir NÃO OK.

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


    if(strcmp(Gen, "feminino") == 0 && idade < 25)
        printf("\nFicha do usuario:\n\nNome: %s, OK\nSexo: %s\nIdade: %d\n", Nome, Gen, idade);

    else
        printf("Não OK");
    return 0;
}
