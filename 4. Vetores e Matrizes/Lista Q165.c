#include <stdio.h>

const int tamanho = 5;

void main() {
    int vetA[tamanho], vetB[tamanho], vetC[tamanho * 2];
    int i, j, k, repetido;

    printf("Informe os elementos do vetor A:\n");
    for (i = 0; i < tamanho; i++) {
    	printf("Informe um numero: ");
        scanf("%d", &vetA[i]);
    }

    printf("Informe os elementos do vetor B:\n");
    for (i = 0; i < tamanho; i++) {
    	printf("Informe um numero: ");
        scanf("%d", &vetB[i]);
    }

    for (i = 0; i < tamanho; i++) {
        vetC[i] = vetA[i];
    }

    for (i = 0, k = tamanho; i < tamanho; i++) {
        repetido = 0;
        for (j = 0; j < tamanho; j++) {
            if (vetB[i] == vetC[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido != 1) {
            vetC[k++] = vetB[i];
        }
    }

    printf("O vetor C contém os elementos presentes nos vetores A e B:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vetC[i]);
    }
    printf("\n");

    getch();
}
