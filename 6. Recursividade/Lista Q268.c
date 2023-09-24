#include <stdio.h>

const int tamanho = 10;

int contarPares(int vetor[tamanho], int n) {
    if (n >= tamanho) {
        return 0;
    }
    
    int parAtual;
	if (vetor[n] % 2 == 0) {
    	parAtual = 1;
	} 
	else {
    	parAtual = 0;
	}
	
    int paresRestantes = contarPares(vetor, n + 1);

    return parAtual + paresRestantes;
}

void main() {
    int vet[tamanho], num, k;

    printf("Digite 10 numeros inteiros para preencher o vetor:\n");
    for (k = 0; k < tamanho; k++) {
        scanf("%d", &vet[k]);
    }

    printf("Digite um numero inteiro entre 1 e 10 (N): ");
    scanf("%d", &num);

    int pares = contarPares(vet, num - 1);
    printf("Existem %d numeros pares no vetor a partir da posicao %d.\n", pares, num);

    getch();
}
