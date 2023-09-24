#include <stdio.h>
	const float pol=2.54;
	
void main(){
	float polegadas;
	printf("Informe o valor em polegadas:");
	scanf("%f", &polegadas);
	float resultado= polegadas*pol;
	printf("O valor em centimetros eh %.2fcm", resultado);
	getch();
}
