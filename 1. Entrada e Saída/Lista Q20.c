#include <stdio.h>

const float valorMQ=300;

void main(){
	float larg, comp;
	printf("Informe a largura e o comprimento do terreno:");
	scanf("%f%f", &larg, &comp);
	float area = larg*comp;
	float valorMerc = valorMQ*area;
	printf("o valor de mercado do terreno eh %.2f", valorMerc);
	getch();
}
