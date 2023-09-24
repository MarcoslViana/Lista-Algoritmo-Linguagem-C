#include <stdio.h>

const int tamanho = 10;

void main() {
    
	int vet[tamanho], k, i;

    for (k = 0; k < tamanho; k++) {
        printf("Informe um numero inteiro: ");
        scanf("%d", &vet[k]);
    }

    // Ordenação em ordem crescente usando o algoritmo bubble sort
    for (k = 0; k < tamanho - 1; k++) {
        for (i = 0; i < tamanho - k - 1; i++) {
            if (vet[i] > vet[i + 1]) {
                // Troca os elementos
                int aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }

    printf("Vetor ordenado em ordem crescente: ");
    
	for (k = 0; k < tamanho; k++) {
        printf("%d ", vet[k]);
    }
    
    printf("\n");

    getch();
}
