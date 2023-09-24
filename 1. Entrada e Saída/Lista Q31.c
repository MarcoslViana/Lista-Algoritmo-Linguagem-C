#include <stdio.h>

const int valAcerto= 5;
const int valErro= -3;
const int valBranco= 0;

void main (){
	int numQuestoes, numAcertos, numErros, numBrancos;
	printf("Informe a quantidade de questões:");
	scanf("%d", &numQuestoes);
	printf("Informe a quantidade de acertos:");
	scanf("%d", &numAcertos);
	printf("Informe a quantidade de erros:");
	scanf("%d", &numErros);
	printf("Informe a quantidade em branco:");
	scanf("%d", &numBrancos);
	int pontuacao= (numAcertos*valAcerto)+(numErros*valErro)+(numBrancos*valBranco);
	printf("A pontuação do candidato foi de %d", pontuacao);
	getch();
}
