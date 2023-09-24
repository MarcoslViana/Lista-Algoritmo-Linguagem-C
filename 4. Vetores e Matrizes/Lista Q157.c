#include <stdio.h>

const int quantidade = 10;

void main(){
	
	int vet[quantidade], k, num;
	
	for(k=0; k<quantidade; k++){
		printf("Informe um numero inteiro:");
		scanf("%d", &vet[k]);
	}
	
	printf("Informe um numero inteiro N:");
	scanf("%d", &num);
	
	for(k=0; k<quantidade; k++){
		if(vet[k] == num){
			printf("%d ", k+1);
		}
	}
	
	getch();
}
