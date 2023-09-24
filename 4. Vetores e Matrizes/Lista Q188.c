#include <stdio.h>

const int linhas = 5;
const int colunas = 5;

void main(){
	
	int i, j, k, num, divisores, primos;
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
		primos = 0;								
		for(i=0; i<linhas; i++){
			divisores = 0;
			for(k=1; k<=mat[i][num-1]; k++){
				if(mat[i][num-1] % k == 0){
					divisores++;
				}
			}
			if(divisores == 2){
				primos++;
			}
		}
	
	}
	else{
		printf("Numero invalido!");
	}
	
	printf("A quantidade de numeros primos na coluna %d eh %d", num, primos);

	getch();
}
