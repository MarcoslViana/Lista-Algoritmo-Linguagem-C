#include <Stdio.h>

const int quantidade= 10;

void main(){
	int vet[quantidade];
	int k;
	for(k=0;k<quantidade;k++){
		printf("informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	printf("os numeros informados na ordem inversa sao:\n");
	for(k=quantidade-1;k>=0;k--){
		printf("%d ", vet[k]);
	}
	getch();
}
