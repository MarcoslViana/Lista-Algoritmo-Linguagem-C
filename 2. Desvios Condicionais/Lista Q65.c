#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"portuguese");
	int idade;
	printf("Informe a idade:");
	scanf("%d", &idade);
	if(idade>=0 && idade<=12){
		printf("Criança");
	}
	else if(idade >=13 && idade<=17){
		printf("Adolescente");
	}
		else if(idade >=18 && idade <=59){
			printf("Adulto");
		}
			else if(idade >=60){
				printf("Idoso");
			}
			getch();
}
