#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int v1[5], c, c2, c3;
    int visto[10] = {0};

    srand(time(NULL));
    
    for (c = 0; c < 5; c++) {
        v1[c] = rand() % 10;
    }

    for (c = 0; c < 5; c++) {
        c3 = 0;
        
        if (visto[v1[c]] == 0) {
            for (c2 = 0; c2 < 5; c2++) {
                if (v1[c] == v1[c2]) {
                    c3++;
                }
            }

            visto[v1[c]] = 1;

            printf("O valor %d aparece %d vez(es)\n", v1[c], c3);
        }
    }

    return 0;
}
