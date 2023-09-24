#include <stdio.h>

void main(){
	int num, k;
	int numDiv = 0;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=1;k<=num;k++){
		int resto= num%k;
		if(resto==0){
			numDiv= numDiv+1;
		}
	}
	if(numDiv==2){
		printf("O numero %d eh primo\n", num);
	}
	
	else{
		printf("O numero %d nao eh primo\n", num);
	}
	
	getch();
}
