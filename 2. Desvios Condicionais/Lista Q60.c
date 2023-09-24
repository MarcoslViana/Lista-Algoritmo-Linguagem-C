#include <stdio.h>

void main (){
	float pessoas;
	printf("Informe o numero de pessoas:");
	scanf("%f", &pessoas);
	if(pessoas<=3 && pessoas >0){
		float gramas= pessoas*250;
		printf("Devem ser comprados %.fg de carne", gramas);
	}
	else if(pessoas>3){
		float quilos= pessoas*0.25;
		printf("Devem ser comprados %.2fKg de carne", quilos);
	}
		else if(pessoas==0){
			printf("Nao vai ter churrasco");
		}
		getch();
}
