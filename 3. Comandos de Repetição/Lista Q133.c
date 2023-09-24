#include <stdio.h>

void main(){
	int num, k, l, m;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=1;k<=num;k++){
		int ast= k;
		int esp= num-k;
		for(m=ast;m>=1;m--){
			printf("*");
		}
		for(l=esp;l>=1;l--){
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
