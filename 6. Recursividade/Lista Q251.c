#include <stdio.h>

int fatorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return n * fatorial(n-1);
}

void main(){
	int n;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	int fat = fatorial(n);
	printf("O fatorial de %d eh %d", n, fat);
	
	getch();	
}
