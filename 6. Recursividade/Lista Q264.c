#include <stdio.h>

int menorDivisor(int n1, int n2, int n3){
	int fator = 2;
	while(n1%fator != 0 && n2%fator != 0 && n3%fator != 0){
		fator++;
	}
	return fator;
}

int mmc(int n1, int n2, int n3){
	if(n1 == 1 && n2 == 1 && n3 == 1){
		return 1;
	}
	int menor = menorDivisor(n1, n2, n3);
	
	if(n1%menor == 0){
		n1 = n1 / menor;
	}
	if(n2%menor == 0){
		n2 = n2 / menor;
	}
	if(n3%menor == 0){
		n3 = n3 / menor;
	}
	return menor * mmc(n1, n2, n3);	
}

void main(){
	int num1, num2, num3;
	
	printf("Informe 3 numeros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	int resultado = mmc(num1, num2, num3);
	printf("MMC: %d", resultado);
	
	getch();
}
