#include <stdio.h>
#include <string.h>

void main(){
	char palavra[100];
	int num;
	printf("Informe uma palavra:");
	gets(palavra);
	printf("Informe um numero:");
	scanf("%d", &num);
	char letra = palavra[num-1];
	printf("A letra da posicao %d da palavra %s eh %c", num, palavra, letra);
	getch();
}
