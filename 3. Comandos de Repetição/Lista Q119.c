#include <stdio.h>

void main(){
	
	int num, penultimo=0, ultimo=0, proximo=1;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	while(proximo <= num){
		
		printf("%d ", proximo);
		
		penultimo = ultimo;
		ultimo = proximo;
		proximo = penultimo + ultimo;	
	}
	getch();
}
