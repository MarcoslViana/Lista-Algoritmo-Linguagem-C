#include <stdio.h>

float media (float n1, float n2, float n3){
	
	return (n1 + n2 + n3)/3;
	
}

void main(){
	
	float num1, num2, num3;
	
	printf("Informe tres numeros inteiro:");
	scanf("%f%f%f", &num1, &num2, &num3);
	
	float resultado = media(num1, num2, num3);
	
	printf("Media: %.2f", resultado);
	
	getch();
}
