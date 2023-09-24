#include <stdio.h>

void main(){
	
	int num, k, contador = 0, numero = 1;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	while(contador < num){
		
		int numDiv = 0;
		
		for(k=1; k<=numero; k++){
			if(numero%k == 0){
				numDiv++;
			}
		}
		if(numDiv == 2){
			printf("%d ", numero);
			contador++;
		}

		numero++;
	}

	getch();
}
