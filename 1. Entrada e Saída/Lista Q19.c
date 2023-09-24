#include <stdio.h>

void main(){
	int ang1, ang2, ang3;
	printf("informe os valores dos dois angulos internos:");
	scanf("%d%d", &ang1, &ang2);
	ang3 = 180-(ang1+ang2);
	printf("O valor do terceito angulo eh %d", ang3);
	getch();
}
