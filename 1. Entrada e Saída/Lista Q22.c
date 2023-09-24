#include <stdio.h>

void main(){
	int a, b;
	printf("Informe os dois numeros:");
	scanf("%d%d", &a, &b);
	int resto = b%a;
	int resultado = b-resto;
	//int quociente = b/a;
	//int resultado = quociente*a;
	printf("O resultado eh %d", resultado);
	getch();
}
