#include <stdio.h>

void binario(int n){
	if(n == 0 || n == 1){
		printf("%d", n);
	}
	else{
		binario(n/2);
		int resto = n % 2;
		printf("%d", resto);
	}
}

void main(){
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	binario(num);
	
	getch();
}
