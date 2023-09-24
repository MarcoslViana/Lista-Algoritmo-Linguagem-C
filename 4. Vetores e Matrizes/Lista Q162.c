#include <stdio.h>

void main () {
	int num;
	printf ("Informe um numero inteiro entre 0 a 255:");
	scanf ("%d", &num);
	
	int resto;
	int k = 0;
	int vet [num];
	
	do{
		resto = num % 2;
		vet[k] = resto;
		num = num / 2;
		k++;
	}
	while (num != 1);
	
	vet[k] = num;
	printf ("O valor em binario eh: \n");
	
	while (k>=0){
		
		printf ("%d ", vet[k]);
		k--;
	
	}
	getch();
}
