#include <stdio.h>

void main(){
	float comp, larg, qtlitros;
	printf("Informe o comprimento e largura da cisterna em metros:");
	scanf("%f%f", &comp, &larg);
	printf("Informe quantos litros deseja armazenar:");
	scanf("%f", &qtlitros);
	float altura= qtlitros/(comp*larg);
	float volume= comp*larg*altura;
	printf("Para armazenar %.2f litros, sera necessario encher %.2f metros", qtlitros, altura);
	getch();
}
