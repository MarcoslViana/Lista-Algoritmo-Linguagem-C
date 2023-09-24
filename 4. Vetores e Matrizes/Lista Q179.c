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
	
	printf("Os numeros acima da diagonal princiapal sao:\n");

	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(j > i){
				printf("%d ", mat[i][j]);
			}
		}
	}
	
	printf("\n");
	
	printf("Os numeros abaixo da diagonal princiapal sao:\n");

	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(j < i){
				printf("%d ", mat[i][j]);
			}
		}
	}
	getch();
	
}
