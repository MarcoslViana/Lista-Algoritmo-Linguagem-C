#include <stdio.h>

int numAlgarismos(int n){
	if(n/10 == 0){
		return 1;
	}
	return 1 + numAlgarismos(n/10);
}

void main(){
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	int quant = numAlgarismos(num);
	printf("O numero %d tem %d algarismos", num, quant);
	
	getch();
}
