#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, somaLINHAS=0, somaCOLUNAS=0, soma, cont;
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
	
	/*Verificando LINHAS nulas*/
	for(i=0; i<linhas; i++){
		cont = 0;
		for(j=0; j<colunas; j++){
			if(mat[i][j] == 0){
				cont++;
			}
		}
		if(cont == 5){
			somaLINHAS++;
		}
	}
	printf("Linhas nulas:%d\n", somaLINHAS);
	
	/*Verificando COLUNAS nulas*/
	for(j=0; j<colunas; j++){
		cont = 0;
		for(i=0; i<linhas; i++){
			if(mat[i][j] == 0){
				cont++;
			}
		}
		if(cont == 5){
			somaCOLUNAS++;
		}
	}
	printf("Colunas nulas:%d\n", somaCOLUNAS);
	
	soma = somaLINHAS + somaCOLUNAS;
	printf("Total de linhas e colunas nulas:%d", soma);

	getch();
}
