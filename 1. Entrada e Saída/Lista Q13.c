#include <stdio.h>

void main (){
	int kiloB;
	printf("Informe o valor em KB:");
	scanf("%d", &kiloB);
	float bits = kiloB*8000;
	float bytes = kiloB*1000;
	float megaB = kiloB/1000;
	float gigaB = megaB/1000;
	printf("Os valores sao:\n %.1f em bits \n %.1f em bytes \n %.2f em MB \n %.4f em GB", bits, bytes, megaB, gigaB);
	getch();
}
