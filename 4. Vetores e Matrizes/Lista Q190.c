#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, soma=0, cont;
	int mat[linhas][colunas];
	
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
	
	for(i=0; i<linhas; i++){
		cont = 0;
		for(j=0; j<colunas; j++){
			if(mat[i][j] == 0){
				cont++;
			}
		}
		if(cont == 5){
			soma++;
		}
	}
	printf("Existem %d linhas nulas na matriz", soma);

	getch();
}
