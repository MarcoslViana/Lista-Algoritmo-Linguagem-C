#include <stdio.h>
#include <string.h>

void main(){
	char palavra [100];
	printf("Informe uma palavra:");
	gets(palavra);
	int tamanho = strlen(palavra);
	printf("A palvra %s tem %d letras", palavra, tamanho);
	getch();
}
