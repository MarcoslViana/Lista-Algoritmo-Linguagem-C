#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j;
	int mat[linhas][colunas];
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero:");
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("Amatriz informada foi:\n");
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Os numeros da diagonal princiapal sao:\n");
	// Primeira forma
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(i == j){
				printf("%d ", mat[i][j]);
			}
		}
	}
	// Segunda forma
/*	for(i=0; i<linhas; i++){	
		printf("%d ", mat[i][i]);		
	}
	*/	
	getch();
	
}
