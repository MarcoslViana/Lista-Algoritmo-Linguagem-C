#include <stdio.h>

const int tamanho = 10;

int primo(int n) {
	int k;
    if(n < 2) {
        return 0;
    }
    for(k=2; k*k<=n; k++) {
        if(n % k == 0) {
            return 0;
        }
    }
    return 1;
}

int verificarPrimo(int vet[tamanho], int n) {
    if(n >= tamanho) {
        return 0;
    }
    if(primo(vet[n])) {
        return 1;
    }
    return verificarPrimo(vet, n + 1);
}

void main() {
    int vet[tamanho];
    int num, k;

    printf("Digite 10 numeros inteiros para preencher o vetor:\n");
    for (k=0; k<tamanho; k++) {
        scanf("%d", &vet[k]);
    }

    printf("Digite um numero inteiro entre 1 e 10 (N): ");
    scanf("%d", &num);

    if (verificarPrimo(vet, num - 1)) {
        printf("Existe numero primo no vetor a partir da posicaoo %d.\n", num);
    } 
	else {
        printf("Nao existe numero primo no vetor a partir da posição %d.\n", num);
    }

    getch();
}
