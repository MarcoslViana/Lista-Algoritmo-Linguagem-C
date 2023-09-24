#include <stdio.h>

void main(){
	int ang1, ang2, ang3;
	
	printf("Informe os valores dos tres angulos internos:");
	scanf("%d%d%d", &ang1, &ang2, &ang3);
	int somaAng = ang1 + ang2 + ang3;
	if(somaAng == 180){
		if(ang1 == 90 || ang2 == 90 || ang3 == 90){
			printf("Eh um triangulo retangulo");
		}
		else{
			printf("Nao eh um triangulo retangulo");
		}
	}
	else{
		printf("Verifique os valores dos angulos informados");
	}
	getch();
}
