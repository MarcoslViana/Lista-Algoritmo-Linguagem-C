#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, num;
	int mat[linhas][colunas], matMULTI[linhas][colunas];
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero:");
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
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	printf("\n");
	
	/*MULTI*/
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			matMULTI[i][j] = mat[i][j] * num;
		}
	}
	
	printf("A multiplicacao da matriz por %d eh:\n", num);
	
	/*Imprimindo MULTI*/
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ", matMULTI[i][j]);
		}
		printf("\n");
	}

	getch();
}
