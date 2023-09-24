#include <stdio.h>

const int tamanho = 10;

int somaV(int vet[tamanho], int n){
	if(n == tamanho-1){
		return vet[n];
	}
	return vet[n] + somaV(vet, n+1);
}

void main(){
	int vet[tamanho], num, k;
	
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro: ");
		scanf("%d", &vet[k]);
	}
	
	printf("Informe um numero inteiro(N) entre 1 e 10: ");
	scanf("%d", &num);
	
	int somar = somaV(vet, num-1);
	printf("A soma dos elementos do vetor a partir da posicao %d eh: %d", num, somar);
	
	getch();
}
