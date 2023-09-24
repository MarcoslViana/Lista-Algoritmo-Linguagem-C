#include <stdio.h>

void main(){
	float lado;
	printf("Informe o valor do lado do quadrado:");
	scanf("%f",&lado);
	float area= lado*lado;
	float perimetro= lado*4;
	printf("A area eh %1.f e o perimetro eh %1.f", area, perimetro);
	getch();
}
