//4)(ATP- Teste 2016) Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes utilizando-se de Vetores, estruturas condicionais e repetição utilizando a linguagem C.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Quest[5], M = 1, Alunos = 0, AR[5], Acertos = 0, CAlunos;

    while (M != 0) {
        printf("Digite 0 para sair e 1 para continuar\n");
        scanf("%d", &M);

        if (M == 1) {
            // Inserção do gabarito
            printf("Inserção do gabarito:\n");
            for (int c = 0; c < 5; c++) {
                do {
                    printf("Questão nº%d (1-5): ", c + 1);
                    scanf("%d", &Quest[c]);
                } while (Quest[c] < 1 || Quest[c] > 5);
            }

            // Inserir número de alunos
            do {
                printf("Número de Alunos: ");
                scanf("%d", &Alunos);
            } while (Alunos < 1);

            // Inserção das respostas dos alunos
            for (CAlunos = 1; CAlunos <= Alunos; CAlunos++) {
                Acertos = 0; // Resetando Acertos para cada aluno
                printf("\nRespostas do Aluno nº%d:\n", CAlunos);

                for (int c = 0; c < 5; c++) {
                    do {
                        printf("Questão nº%d (1-5): ", c + 1);
                        scanf("%d", &AR[c]);
                    } while (AR[c] < 1 || AR[c] > 5);
                }

                // Verificação de acertos
                for (int c = 0; c < 5; c++) {
                    if (AR[c] == Quest[c]) {
                        Acertos++;
                    }
                }

                printf("Aluno nº%d: %d acertos\n", CAlunos, Acertos);
            }
        }
    }

    return 0;
}
