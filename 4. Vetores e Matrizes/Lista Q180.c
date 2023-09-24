#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, num, cont=0;
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
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	for(i=0; i<linhas; i++){
		for(j=0; j<colunas; j++){
			if(mat[i][j] == num){
				cont++;
			}
		}
	}
	
	printf("O numero %d apareceu %d vezes dentro da matriz", num, cont);
	getch();
}
