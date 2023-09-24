#include <stdio.h>

void main(){
	int num;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	int resto= num%2;
	if(resto==0){
		printf("O numero %d eh par", num);
	}
	else{
		printf("O numero %d eh impar", num);
	}
	getch();
}
