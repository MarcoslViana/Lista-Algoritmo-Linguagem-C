#include <stdio.h>

void asteriscos(int n){
	if(n == 0){
		return;
	}
	asteriscos(n-1);
	int k;
	for(k=0; k<n; k++){
		printf("*");
	}
	printf("\n");
}

void main(){
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	asteriscos(num);
	
	getch();
}
