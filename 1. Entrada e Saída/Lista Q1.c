#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("Informe os tres numeros inteiros:");
	scanf("%d%d%d",&num1,&num2,&num3);
	int media = (num1+num2+num3)/3;
	printf("A media eh %d",media);
	getch();
}
