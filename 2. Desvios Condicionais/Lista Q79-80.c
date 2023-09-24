#include <stdio.h>
#include <math.h>

void main(){
	float a, b, c;
	printf("Informe os coeficientes a, b e c:");
	scanf("%f%f%f", &a, &b, &c);
	
	float delta = pow(b,2)-4*a*c;

	if(delta < 0){
		printf("Nao possui raiz real");
	}
	else if(delta > 0){
		printf("Possui duas raizes reais");
		float x1 = (-b+sqrt(delta)/(2*a));
		float x2 = (-b-sqrt(delta)/(2*a));
		printf("As raizes sao: %.1f e %.1f", x1, x2);
	}
	else if(delta == 0){
		printf("possui uma raiz real");
		float x = -b/(2*a);
		printf("A raiz eh %.1f", x);
	}
	getch();
}
