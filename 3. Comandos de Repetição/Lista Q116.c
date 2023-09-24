#include <stdio.h>
#include <string.h>

const int min = 18;
const int max = 21;
const int pessoas = 20;

void main(){
	
	char nome[20], sexo[10];
	
	int idade, k = 1, quant = 0, mulheres = 0;
	
	while(k <= pessoas){
		
		printf("Informe o nome:");
		scanf("%s", &nome);
		printf("Informe o sexo:");
		scanf("%s", &sexo);
		printf("Informe a idade:");
		scanf("%d", &idade);
		
		if(strcmp(sexo, "feminino") == 0){
			mulheres++;
			if(idade >= min && idade <= max){
				quant++;
			}
		}
		
		k++;
	}
	
	float percMulheres = (100 / pessoas) * mulheres;
	float idadeMulheres = (100 / pessoas) * quant;
	
	printf("O percentual de mulheres eh de %.2f", percMulheres);
	printf("O percentual de mulheres entre %d e %d eh de %.2f", min, max, idadeMulheres);
	
	getch();
}
