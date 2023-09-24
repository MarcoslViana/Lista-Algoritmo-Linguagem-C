#include <stdio.h>

void main(){
	
	int num, k, penultimo=1, ultimo=1, proximo=0;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	if(num == 1 || num == 2){
		printf("O %d° termo da série de Fibonacci eh: 1\n");
	}
	else{
		for(k=3; k<=num; k++){ // 4 5 6 7
			proximo = penultimo + ultimo; // 2 3 5 8
			penultimo = ultimo; // 1 2 3 5
			ultimo = proximo; // 2 3 5 8
		}
		
		printf("O %d° termo da serie de Fibonacci eh: %d\n", num, proximo);
		
	}
	getch();
}
