#include <stdio.h>

void main(){
	int ano;
//	do{
	printf("Informe o ano:");
	scanf("%d", &ano);
	int teste1= ano%400;
	int teste2= ano%4;
	int teste3= ano%100;
	if(teste1==0 || teste2==0 && teste3!=0){
		printf("O ano %d eh bissexto\n", ano);
	}
	else{
		printf("O ano %d nao eh bissexto\n", ano);
	}
//	}
//	while(ano!=0);
	getch();
}
