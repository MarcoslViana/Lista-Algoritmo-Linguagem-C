#include <stdio.h>

void main(){
	int termoIn, razao;
	printf("Informe o termo inicial e razao da PA:");
	scanf("%d%d", &termoIn, &razao);
	int termo2 = termoIn+razao;
	int termo3 = termo2+razao;
	int termo4 = termo3+razao;
	int termo5 = termo4+razao;
	printf("Os 5 primeiros termos da PA sao:%d %d %d %d %d", termoIn, termo2, termo3, termo4, termo5);
	getch();
}

