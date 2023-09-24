#include <stdio.h>

const int tamanho = 5;

void main() {
    int vetA[tamanho], vetB[tamanho], vetC[tamanho];
    int k, i, repetido, tamanhoC = 0;

    printf("Informe os numeros do vetor A:\n");
    for (k = 0; k < tamanho; k++) {
        printf("Informe um numero: ");
        scanf("%d", &vetA[k]);
    }

    printf("Informe os numeros do vetor B:\n");
    for (k = 0; k < tamanho; k++) {
        printf("Informe um numero: ");
        scanf("%d", &vetB[k]);
    }

    for (k = 0; k < tamanho; k++) {
        repetido = 0;

        for (i = 0; i < tamanho; i++) {
            if (vetA[k] == vetB[i]) {
                repetido = 1;
                break;
            }
        }
        
        if (repetido != 1) {
            vetC[tamanhoC] = vetA[k];
            tamanhoC++;
        }
    }

    printf("Vetor C (A - B):\n");
    for (k = 0; k < tamanhoC; k++) {
        printf("%d ", vetC[k]);
    }

    getch();
}
