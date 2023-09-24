#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j;
	int matA[linhas][colunas], matB[linhas][colunas], matSOMA[linhas][colunas];
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero:");
			scanf("%d", &matA[i][j]);
		}
	}
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero:");
			scanf("%d", &matB[i][j]);
		}
	}
	
	printf("As matrizes informadas foram:\n");
	printf("\n");
	printf("Primeira matriz:\n");
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ", matA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Segunda matriz:\n");
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ", matB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	/*SOMA*/
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			matSOMA[i][j] = matA[i][j] + matB[i][j];
		}
	}
	
	printf("A soma das duas matrizes eh:\n");
	/*Imprimindo SOMA*/
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ", matSOMA[i][j]);
		}
		printf("\n");
	}

	getch();
}
