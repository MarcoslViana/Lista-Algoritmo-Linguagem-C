#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, soma=0;
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
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			soma += mat[i][j];
		}
		printf("A soma da linha %d eh: %d\n", i+1, soma);
		soma=0;
	}

	getch();
}
