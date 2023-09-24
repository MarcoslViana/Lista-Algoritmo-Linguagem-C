#include <stdio.h>

void main(){
	int num;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	if(num>0){
		printf("O numero %d eh positivo", num);
	}
	else if(num<0){
		printf("O numero %d eh negativo", num);
	}
		else if(num==0){
			printf("O numero %d eh neutro", num);
		}
		getch();
}
