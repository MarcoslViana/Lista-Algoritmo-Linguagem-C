#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j;
	float mat[linhas][colunas];
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("Informe um numero:");
			scanf("%f", &mat[i][j]);
		}
	}
	
	printf("Amatriz informada foi:\n");
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			printf("%.1f ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("A matriz transposta eh:\n");
	
	
/*	for(j=0; j<colunas; j++){
		for(i=0; i<linhas; i++){
			printf("%.1f ", mat[i][j]);
		}
		printf("\n");
	}
*/
	for(i=0; i<linhas-1; i++){
		for(j=i+1; j<colunas; j++){
			int aux = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = aux;
		}
	}
	
	for(i=0; i<colunas; i++){
		for(j=0; j<linhas; j++){
			printf("%.1f ", mat[i][j]);
		}
		printf("\n");
	}
		
	getch();
	
}
