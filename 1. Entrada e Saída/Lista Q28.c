#include <stdio.h>

const float aVista= 0.1;
const float vezes= 10;
const float cartao10x= 0.2;

void main(){
	float valorCompra;
	printf("Informe o valor da compra:");
	scanf("%f", &valorCompra);
	float umaVez= valorCompra-(valorCompra*aVista); 
	float divTres= valorCompra/3;
	float divDez= ((valorCompra*cartao10x)+valorCompra)/vezes;
	printf("Valor a vista c/ desconto: %.2f\n Valor dividido em 3x s/juros: %.2f\n Valor dividido em 10x c/juros: %.2f", umaVez, divTres, divDez);
	getch();
}
