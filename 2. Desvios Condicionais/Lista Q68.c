#include <stdio.h>
const float contprev= 0.11;
const float IR7i5= 0.075;
const float IR15= 0.15;
const float IR22i5= 0.225;
const float IR27i5= 0.275;

const float v1=1903.98; 
const float v2=1903.99;
const float v3=2826.65; 
const float v4=2826.66;
const float v5=3751.05;
const float v6=3751.06;
const float v7=4664.68;
const float v8=4664.69;

void main(){
	float salBruto;
//	do{
	printf("informe o salario bruto:");
	scanf("%f", &salBruto);
	float salLiq= salBruto-(salBruto*contprev);
	
	
	if(salLiq<=v1){
		printf("O salario liquido eh %.2f", salLiq);
	}
	else if(salLiq>=v2 && salLiq<=v3){
			float salFinal= salLiq-(salLiq*IR7i5);
			printf("O salario liquido eh %.2f", salFinal);
		}
		else if(salLiq>=v4 && salLiq<=v5){
				float salFinal= salLiq-(salLiq*IR15);
				printf("O salario liquido eh %.2f", salFinal);
			}
			else if(salLiq>=v6 && salLiq<=v7){
					float salFinal= salLiq-(salLiq*IR22i5);
					printf("O salario liquido eh %.2f", salFinal);
				}
				else if(salLiq>=v8){
						float salFinal= salLiq-(salLiq*IR27i5);
						printf("O salario liquido eh %.2f", salFinal);
					}
//				}
//				while(salBruto!=0);
				getch();			
}
