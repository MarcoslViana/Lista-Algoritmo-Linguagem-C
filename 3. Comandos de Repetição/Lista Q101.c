#include <stdio.h>

void main(){
	int n, k;
	printf("Informe um numero inteiro positivo:");
	scanf("%d", &n);
	for(k=1;k<=n*2;k=k+2){
		printf("%d\n", k);
	}	
	getch();
}
