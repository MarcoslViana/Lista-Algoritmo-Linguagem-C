#include <stdio.h>

#define SIZE 5

int main() {
    int vetorA[SIZE];
    int vetorB[SIZE];
    int vetorC[SIZE * 2];
    int i, j, k, repetido;

    // Lendo os elementos do vetor A
    printf("Digite os %d elementos do vetor A:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetorA[i]);
    }

    // Lendo os elementos do vetor B
    printf("Digite os %d elementos do vetor B:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &vetorB[i]);
    }

    // Copiando os elementos de A para C
    for (i = 0; i < SIZE; i++) {
        vetorC[i] = vetorA[i];
    }

    // Verificando se cada elemento de B já está em C
    for (i = 0, k = SIZE; i < SIZE; i++) {
        repetido = 0;
        for (j = 0; j < SIZE; j++) {
            if (vetorB[i] == vetorC[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            vetorC[k++] = vetorB[i];
        }
    }

    // Exibindo o vetor C
    printf("O vetor C contém os elementos presentes em pelo menos um dos vetores A e B:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
