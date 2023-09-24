#include <stdio.h>

const float valorMQ=17.50;

void main(){
	int area;
	printf("Informe a area:");
	scanf("%d", &area);
	float custoFinal = (float)area*valorMQ;
	printf("o custo final sera de %.2f", custoFinal);
	getch();
}
