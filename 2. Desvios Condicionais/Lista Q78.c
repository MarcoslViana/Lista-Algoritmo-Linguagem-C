#include <stdio.h>

void main() {
	float preco_gas, preco_alc;
	printf("Informe o preco da gasolina:");
	scanf("%f", &preco_gas);
	printf("Informe o preco do alcool:");
	scanf("%f", &preco_alc);
	
	float teste = preco_gas * 0.7;
	
	if(teste <= preco_alc){
		printf("Abasteca com gasolina");
	}
	else{
		printf("Abasteca com alcool");
	}
	
	getch();
}
