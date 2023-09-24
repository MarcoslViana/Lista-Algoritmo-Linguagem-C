#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, num, soma=0;
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
	
	printf("Informe um numero inteiro entre 1 e 5:");
	scanf("%d", &num);
	
	if(num >= 1 && num <=5){
		for(j=0; j<=num; j++){
			if(j == num){
				for(i=0; i<colunas; i++){
					soma = soma + mat[i][j-1];
				}
			}
		}
	}
	
	float media = (float)soma/colunas;
	printf("A media aritmetica da coluna %d eh %.2f", num, media);
	
	getch();
}
