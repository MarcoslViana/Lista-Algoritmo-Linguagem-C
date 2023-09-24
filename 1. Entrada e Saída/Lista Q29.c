#include <stdio.h>

void main(){
	int questoes, quantAcert;
	printf("Informe a quantidade de questoes:");
	scanf("%d", &questoes);
	printf("Informe a quantidade de acertos:");
	scanf("%d", &quantAcert);
	float percAcert= ((float)quantAcert/questoes)*100;
	float percErro= 100-percAcert;
	printf("O percentual de acertos foi de %.f%% e o percentual de erros foi de %.f%%", percAcert, percErro);
	getch();
}



