#include <stdio.h>

void main(){
	float n1,n2;
	printf("Informe os dois numeros:");
	scanf("%f%f", &n1,&n2);
	if(n2<n1){
		printf("O segundo numero eh menor que o primeiro");
	}
	else if(n2>n1){
			printf("O segundo numero eh maior que o primeiro");
			}
			else if(n2==n1){
					printf("O segundo numero eh igual ao primeiro");
			}
			getch();
}
