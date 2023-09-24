#include <stdio.h>

int somaIntervalo(int min, int max){
	if(min == max){
		return min;
	}
	return min + somaIntervalo(min + 1, max);
}

void main(){
	int minimo, maximo;
	
	printf("Informe dois numeros inteiros: ");
	scanf("%d%d", &minimo, &maximo);
	
	int somar = somaIntervalo(minimo, maximo);
	printf("A soma dos numeros do intervalo eh: %d", somar);
	
	getch();
}
