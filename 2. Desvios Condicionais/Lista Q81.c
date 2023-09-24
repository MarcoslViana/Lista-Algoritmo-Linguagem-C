#include <stdio.h>
#include <math.h>

const float x_centro = 0;
const float y_centro = 0;

void main(){
	float xp, yp, raio;
	
	printf("Informe as coordenadas do ponto:");
	scanf("%f%f", &xp, &yp);
	printf("Informe o raio:");
	scanf("%f", &raio);
	
	float dist = sqrt(pow(xp-x_centro,2)) + (pow(yp-y_centro,2));
	
	if(dist < raio){
		printf("O ponto esta dentro da circunferencia");
	}
	else if(dist == raio){
		printf("O ponto esta na superficie da circunferencia");
	}
	else{
		printf("O ponto esta fora da circunferencia");
	}
	
	getch();
}
