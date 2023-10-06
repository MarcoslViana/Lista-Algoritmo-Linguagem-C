#include <stdio.h>

void main(){
	float tempC;
	printf("Informe a temperatura em Celsius:");
	scanf("%f", &tempC);
	float tempF= (tempC*9/5)+32;
	float tempK= tempC+273;
	printf("O valor em Fahrenheit eh %.2f\n", tempF);
	printf("O valor em Kelvin eh %.2f", tempK);
	getch();
}
