#include <stdio.h>

int potencia(int base, int expoente){
	if(expoente == 0){
		return 1;
	}
	if(base == 1 || base == 0){
		return base;
	}
	return base * potencia(base, expoente -1);
}

void main(){
	int base, exp;
	
	printf("Informe a base: ");
	scanf("%d", &base);
	printf("Informe o expoente: ");
	scanf("%d", &exp);
	
	int pot = potencia(base, exp);
	printf("A potenciacao de %d elevado a %d eh %d", base, exp, pot);
}
