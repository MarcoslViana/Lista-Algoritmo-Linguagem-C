#include <stdio.h>

void main(){
	int golsTC, golsTF;
	printf("Informe o numero de gols do time de casa:");
	scanf("%d", &golsTC);
	printf("Informe o numero de gols do time de fora:");
	scanf("%d", &golsTF);
	if(golsTC>golsTF){
		printf("O vencedor foi o time de casa");
	}
	else if(golsTF>golsTC){
		printf("O vencedor foi o time de fora");
	}
		else if(golsTC==golsTF){
			printf("O jogo terminou em empate");
		}
		getch();
}
