#include <stdio.h>

int fibonacci(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}

void main(){
	int num;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	int enesimo = fibonacci(num);
	printf("O numero da posicao %d da serie de Fibonacci eh %d", num, enesimo);
	
	getch();
}
