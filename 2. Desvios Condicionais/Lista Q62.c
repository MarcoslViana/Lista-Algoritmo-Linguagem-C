#include <stdio.h>

void main(){
	int m,n;
	printf("Informe dois numeros inteiros:");
	scanf("%d%d", &m,&n);
	int resto= m%n;
	if(resto==0){
		printf("Eh multiplo");
	}
	else if(resto>0){
		printf("Nao eh multiplo");
	}
	getch();
}

