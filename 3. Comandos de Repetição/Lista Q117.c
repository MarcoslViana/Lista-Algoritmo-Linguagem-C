#include <stdio.h>

const int quantidade = 10;

void main(){
	
	int num, k, fatorial = 1, i = 1;
	
	while(i <= quantidade){
		
		printf("Informe um numero inteiro:");
		scanf("%d", &num);
		
		for(k=num; k>=1; k--){
			fatorial = fatorial * k;
		}
		
		printf("O fatorial de %d eh %d\n", num, fatorial);
		
		i++;
		fatorial = 1;
	}
	getch();
}
