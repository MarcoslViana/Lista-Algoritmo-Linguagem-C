#include <stdio.h>
#include <math.h>

float area (float num){
	
	return pow(num,2);
	
}

float perimetro (float num){
	
	return num * 4;
	
}

void main(){
	
	float lado;
	
	printf("Informe o lado do quadrado:");
	scanf("%f", &lado);
	
	float areaQuadrado = area(lado);
	float perimetroQuadrado = perimetro(lado);
	
	printf("Area: %.2f\n", areaQuadrado);
	printf("Perimetro: %.2f\n", perimetroQuadrado);	
	
	getch();
}
