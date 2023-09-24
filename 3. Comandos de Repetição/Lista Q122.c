#include <stdio.h>

void main(){
	
	int num, penultimo=0, ultimo=0, proximo=1;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	while(proximo < num){
		
		penultimo = ultimo;
		ultimo = proximo;	
		proximo = penultimo + ultimo;
	}
	
	if(proximo == num){
		printf("O numero %d pertence a serie de Fibonacci", num);
	}
	else{
		printf("O numero %d nao pertence a serie de Fibonacci", num);
	}

	getch();
}
