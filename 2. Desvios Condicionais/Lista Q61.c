#include <stdio.h>

void main(){
	int num, modulo;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	if(num>0){
		modulo= num;
		printf("O modulo de %d eh %d", num, modulo);
	}
	else if(num<0){
		modulo= num*-1;
		printf("O modulo de %d eh %d", num, modulo);
	}
	getch();
}
