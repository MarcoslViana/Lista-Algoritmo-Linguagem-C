#include <stdio.h>

void main(){
	int num;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	int ant= num-1;
	int suc= num+1;
	printf("O seu antecessor eh %d e o seu sucessor eh %d", ant, suc);
	getch();
}
