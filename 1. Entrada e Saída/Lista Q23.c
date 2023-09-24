#include <stdio.h>
#include <math.h>

const float pi= 3.14;
const float form= 1.33;

void main(){
	float raio;
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	float volEsf = form*pi*pow(raio,3);
	printf("O volume da esfera eh %.f", volEsf);
	getch();
}
