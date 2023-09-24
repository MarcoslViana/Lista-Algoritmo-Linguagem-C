#include <stdio.h>

const int quantidade = 10;

void main(){
	
	int vet[quantidade], k, soma=0;
	
	for(k=0; k<quantidade; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
		soma = soma + vet[k];
	}

	int media = soma / quantidade;
	printf("Media: %d\n", media);
	
	for(k=0; k<quantidade; k++){
		if(vet[k] > media){
			printf("%d ", vet[k]);
		}
	}

	getch();
	
}
