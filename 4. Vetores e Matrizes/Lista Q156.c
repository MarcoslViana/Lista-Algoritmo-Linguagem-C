#include <stdio.h>

const int quantidade=10;


void main(){
	int vet[quantidade];
	int k, n;
	for(k=0;k<quantidade;k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("Informe um numero inteiro N:");
	scanf("%d", &n);
	for(k=0;k<quantidade;k++){
		if(vet[k]>n){
			printf("%d ", vet[k]);
		}
	}
	getch();
}
