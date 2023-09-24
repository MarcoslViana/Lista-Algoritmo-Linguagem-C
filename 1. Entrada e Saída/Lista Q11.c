#include <stdio.h>
const float cotDolar=5.30;

void main(){
	float real;
	printf("Informe o valor em real:");
	scanf("%f", &real);
	float dolar= real/cotDolar;
	printf("O valor em dolares eh %.2f", dolar);
	getch();
}
