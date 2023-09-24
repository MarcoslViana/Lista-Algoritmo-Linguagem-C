#include <stdio.h>

void main(){
	float preProduc, marLuc;
	printf("Informe o preco de podrucao e a margem de lucro desejada:");
	scanf("%f%f", &preProduc, &marLuc);
	float porcent = marLuc/100;
	float lucro = preProduc*porcent;
	float preVenda = preProduc+lucro;
	printf("O preco de venda deve ser de R$ %.2f", preVenda);
	getch();
}
