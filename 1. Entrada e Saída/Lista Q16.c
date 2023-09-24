#include <stdio.h>

void main(){
	int numAscii;
	char maiuscula;
	char minuscula;
	printf("Informe uma letra minuscula:");
	scanf("%c", &minuscula);
	numAscii = minuscula;
	maiuscula = minuscula-32;
	printf("%c", maiuscula);
	getch();
}
