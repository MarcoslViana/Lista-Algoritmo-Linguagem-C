#include <stdio.h>

float area(float num1, float num2){
	
	return (num1 * num2)/2;
}

void main(){
	
	float base, altura;
	
	printf("Informe a base: ");
	scanf("%f", &base);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	float calArea = area(base, altura);
	
	printf("Area do Triangulo: %.2f", calArea);
	
	getch();
}
