#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, num, /*soma=0*/, cont=0;
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
	
	printf("Informe um numero inteiro entre 1 e 5:");
	scanf("%d", &num);
	
	if(num >= 1 && num <= 5){

		/*for(i=0; i<linhas; i++){
			soma = soma + mat[i][num-1];
		}
		if(soma == 0){
			printf("A coluna %d eh nula", num);
		}
		else{
			printf("A coluna %d nao eh nula", num);
		}*/
		
		for(i=0; i<linhas; i++){
			if(mat[i][num-1] == 0){
				cont++;
			}
		}
		if(cont == 5){
			printf("A coluna %d eh nula", num);
		}
		else{
			printf("A coluna %d nao eh nula", num);
		}
	}
	else{
		printf("Numero invalido!");
	}

	getch();
}
