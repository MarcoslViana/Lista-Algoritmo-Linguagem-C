#include <stdio.h>

void asteriscos(int n){
    if(n == 0){
        return;
    }
	int k;
    for(k=0; k<n; k++){
        printf("*");
    }
    printf("\n");

    asteriscos(n-1);
}

void main(){
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	asteriscos(num);
	
	getch();
}
