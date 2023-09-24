#include <stdio.h>

void pularLinhas(int n){
	if(n>0){
		printf("\n");
		pularLinhas(n-1);
	}
}

void main(){
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	pularLinhas(num);
	
	getch();
}
