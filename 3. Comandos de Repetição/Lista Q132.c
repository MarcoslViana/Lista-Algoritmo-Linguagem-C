#include <stdio.h>

void main(){
	int num, k, l, m;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=num;k>=1;k--){
		int ast= k;
		int esp= num-k;
		for(l=1;l<=esp;l++){
			printf(" ");
		}
		for(m=1;m<=ast;m++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}
