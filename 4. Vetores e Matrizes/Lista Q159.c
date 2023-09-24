#include <stdio.h>

const int quantidade = 10;

void main(){
	
	int vet[quantidade], k, m, n;
	
	for(k=0; k<quantidade; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	
	printf("Informe dois numeros inteiros M e N:");
	scanf("%d%d", &m, &n);
	
	printf("Vetor antes da permutacao:");
	
	for(k=0; k<quantidade; k++){
		printf("%d ", vet[k]);
	}
	
	printf("\n");
	
	int aux = vet[m-1];
	vet[m-1] = vet[n-1];
	vet[n-1] = aux;
	
	printf("Vetor apos a permutacao:");
	
	for(k=0; k<quantidade; k++){
		printf("%d ", vet[k]);
	}
	
	getch();
}
