#include <stdio.h>

void main(){
	
	int num, k, fatorial=1;
	
	printf("Informe um numero:");
	scanf("%d", &num);
	
	for(k=num; k>=1; k--){
		fatorial = fatorial * k;
	}
	
	printf("O fatorial de %d eh %d", num, fatorial);
	
	getch();
	
}
