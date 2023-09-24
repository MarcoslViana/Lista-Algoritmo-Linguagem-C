#include <stdio.h>
#include <math.h>

void main(){
	float cateto1, cateto2;
	printf("Informe o valor dos doid catetos:");
	scanf("%f%f", &cateto1, &cateto2);
	float hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
	//float soma= pow(cateto1,2)+pow(cateto2,2);
	//float hipotenusa= sqrt(soma);
	printf("A hipotenusa eh %.2f", hipotenusa);
	getch();
}
