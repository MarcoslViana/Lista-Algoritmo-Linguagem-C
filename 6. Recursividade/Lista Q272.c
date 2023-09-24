#include <stdio.h>

int algarismos(int numero, int posicao){
	int resposta;
	if(posicao == 1){
		resposta = numero % 10;
		return resposta;
	}
	return algarismos(numero/10, posicao-1);
}

void main(){
	int num, pos;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	printf("Informe a posicao: ");
	scanf("%d", &pos);
	
	int resultado = algarismos(num, pos);
	printf("O digito da posicao %d(da direita p/ esquerda) do numero %d eh: %d", pos, num, resultado);
	
	getch();
}
