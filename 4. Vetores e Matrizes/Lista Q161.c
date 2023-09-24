#include <stdio.h>

const int quantidade = 10;

void main(){
	
	int vet[quantidade], k, cont=0;
	
	for(k=0; k<quantidade; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	
	for(k=0; k<quantidade/2; k++){
		if(vet[k] == vet[quantidade-1-k]){
			cont++;
		}
	}
	
	if(cont == quantidade/2){
		printf("O vetor eh palindromo");
	}
	else{
		printf("o vetor nao eh palindromo");
	}
	
	getch();
	
}
