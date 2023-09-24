#include <stdio.h>

const int linhas = 4;
const int colunas = 4;

void main(){
	
	int i, j, mat[linhas][colunas];
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero inteiro:");
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("A matriz informada foi:\n");
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	getch();
}
