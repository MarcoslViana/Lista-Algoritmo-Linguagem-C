#include <stdio.h>
#include <string.h>

const int questoes = 10;

void main(){
	
	char vet[questoes], gab[questoes], candidato[50]; 
	int acertos=0;
	int k, g;
	
	for(g=0; g<questoes; g++){
		printf("Informe o gabarito da questao %d:", g+1);
		scanf("%s", &gab[g]);
	}
	
	do{
		
		printf("Informe o nome do candidato:");
		scanf("%s", &candidato);
		
		if (strcmp(candidato, "fim") == 0 || strcmp(candidato, "Fim") == 0){
			break;
		}
		
		for(k=0; k<questoes; k++){
			printf("Informe a resposta da questao %d:", k+1);
			scanf("%s", &vet[k]);
		}
		
		for(k=0; k<questoes; k++){
			for(g=k; g<=k; g++){
				if(vet[k] == gab[g]){
					acertos++;
				}
			}
		}
		
		int percAcertos = (acertos * 100)/questoes;
		printf("O percentual de acertos do candidato %s foi de %d%%\n", candidato, percAcertos);
		
	}while(1);
	
	getch();
	
}
