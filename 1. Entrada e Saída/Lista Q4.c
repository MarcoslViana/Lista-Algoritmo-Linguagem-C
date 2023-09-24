#include <stdio.h>
#include <math.h>

void main(){
	int num;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &num);
	int dobro= num*2;
	int triplo= num*3;
	int quadrado= pow(num,2);
	int cubo= pow(num,3);
	int raiz= sqrt(num);
	printf("O seu dobro eh %d\n", dobro);
	printf("O seu triplo eh %d\n", triplo);
	printf("O seu quadrado eh %d\n", quadrado);
	printf("O seu cubo eh %d\n", cubo);
	printf("A sua raiz quadrada eh %d", raiz);
	getch();
}
