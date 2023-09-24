#include <stdio.h>
#include <math.h>

const float pi = 3.14;

float area(float num) {
	
	return pi * pow(num,2);
}

float comprimento(float num) {
	
	return 2 * pi * num;
}


void main(){
	
	float raio;
	
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	
	float valor_area = area(raio);
	float valor_comp = comprimento(raio);
	
	printf("Area: %.2f\n", valor_area);
	printf("Comprimento: %.2f\n", valor_comp);
	
	getch();	
}
