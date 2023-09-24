#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int vetorC[TAMANHO * 2];

    printf("Digite os elementos do vetor A (ordenado):\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os elementos do vetor B (ordenado):\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    int i = 0; // Índice para percorrer o vetorA
    int j = 0; // Índice para percorrer o vetorB
    int k = 0; // Índice para percorrer o vetorC

    while (i < TAMANHO && j < TAMANHO) {
        if (vetorA[i] <= vetorB[j]) {
            vetorC[k] = vetorA[i];
            i++;
        } else {
            vetorC[k] = vetorB[j];
            j++;
        }
        k++;
    }

    // Se algum dos vetores ainda tiver elementos restantes
    while (i < TAMANHO) {
        vetorC[k] = vetorA[i];
        i++;
        k++;
    }

    while (j < TAMANHO) {
        vetorC[k] = vetorB[j];
        j++;
        k++;
    }

    printf("Vetor resultante (C) ordenado: ");
    for (int i = 0; i < TAMANHO * 2; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
