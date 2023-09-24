#include <stdio.h>

void main(){
	float base, altura;
	printf("Informe a base e a altura do triangulo:");
	scanf("%f%f",&base, &altura);
	float area= (base*altura)/2;
	printf("A area do triangulo eh %.2f", area);
	getch();
}
