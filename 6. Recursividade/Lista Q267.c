#include <stdio.h>

const int tamanho = 10;

int frequencia(int vet[tamanho], int n, int pos){
	if(pos == tamanho-1 && vet[pos] == n){
		return 1;
	}
	if(pos == tamanho-1){
		return 0;
	}
	if(vet[pos] == n){
		return 1 + frequencia(vet, n, pos + 1);
	}
	return frequencia(vet, n, pos + 1);
}

void main(){
	int vet[tamanho], num, posicao, k;
	
	for(k=0; k<tamanho; k++){
		printf("Informe um numero inteiro: ");
		scanf("%d", &vet[k]);
	}
	
	printf("Informe um numero inteiro(N) entre 1 e 10: ");
	scanf("%d", &num);
	
	printf("Informe a posicao (entre 1 e 10): ");
	scanf("%d", &posicao);
	
	int procurar = frequencia(vet, num, posicao-1);
	printf("O numero %d aparece %d vezes no vetor a partir da posicao %d", num, procurar, posicao);
	
	getch();
}
