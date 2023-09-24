#include <stdio.h>

void main(){
	int num, k, divEx=0;
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	for(k=1;k<=num;k++){
		int resto= num%k;
		if(resto==0){
			divEx= divEx+k;
		}
	}
	if(divEx-num==num){
		printf("O numero %d eh perfeito", num);
	}
	else{
		printf("O numero %d nao eh perfeito", num);
	}
	getch();
}
