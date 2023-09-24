#include <stdio.h>

const float kmpL= 14;

void main(){
	float distancia, precoLitro;
	printf("informe a distancia em km e o preço do litro:");
	scanf("%f%f", &distancia, &precoLitro);
	float quantLitro= distancia/kmpL;
	float custo= quantLitro*precoLitro;
	printf("Para percorrer %.fkm, o custo sera de R$%.2f", distancia, custo);
	getch();
}
