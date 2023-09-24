#include <stdio.h>

void main(){
	
	int tInicial, razao, num, k;
	
	printf("Informe o termo inicial e a razao inicial da PA:");
	scanf("%d%d", &tInicial, &razao);
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	for(k=0; k<num; k++){
		int termo = tInicial + (razao * k);
		printf("%d ", termo);
	}
	
	getch();
	
}
