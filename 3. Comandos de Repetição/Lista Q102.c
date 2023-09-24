#include <stdio.h>

void main(){
	int num, k;
	printf("Informe um numero interio:");
	scanf("%d", &num);
	for(k=1;k<=num;k=k+1){
		int resto= num%k;
		if(resto==0){
			printf("%d\n", k);
		}
	}
	getch();
}
