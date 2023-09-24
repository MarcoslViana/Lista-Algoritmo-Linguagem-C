#include <stdio.h>

const int quantidade = 10;

void main(){
	
	int vet[quantidade], k;
	
	for(k=0; k<quantidade; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	
	for(k=0; k<quantidade/2; k++){
		int aux = vet[k];
		vet[k] = vet[quantidade-1-k];
		vet[quantidade-1-k] = aux;
	}
	
	printf("Vetor invertido:");
	
	for(k=0; k<quantidade; k++){
		printf("%d ", vet[k]);
	}
	
	getch();
	
}
