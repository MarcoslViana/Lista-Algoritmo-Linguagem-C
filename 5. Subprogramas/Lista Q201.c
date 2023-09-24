#include <stdio.h>
#include <math.h>

int dobro (int num){
	return num * 2;
}

int triplo (int num){
	return num * 3;
}

int quadrado (int num){
	return pow(num,2);
}

int cubo (int num){
	return pow(num,3);
}

int raiz (int num){
	return sqrt(num);	
}

void main(){
	
	int num;
	
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	int Vdobro = dobro(num);
	int Vtriplo = triplo(num);
	int Vquadrado = quadrado(num);
	int Vcubo = cubo(num);
	int Vraiz = raiz(num);
	
	printf("Dobro: %d\n", Vdobro);
	printf("Triplo: %d\n", Vtriplo);	
	printf("Quadrado: %d\n", Vquadrado);
	printf("Cubo: %d\n", Vcubo);
	printf("Raiz: %d\n", Vraiz);
	
	getch();
}
