#include <Stdio.h>

const int quantidade= 10;

void main(){
	int vet[quantidade];
	int k, n;
	for(k=0;k<quantidade;k++){
		printf("informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("Informe um numero entre 1 e %d:", quantidade);
	scanf("%d", &n);
	printf("Resposta: %d", vet[n-1]);
	getch();
}
