#include <stdio.h>

int somaAlgarismos(int n){
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaAlgarismos(n / 10);
}

void main(){
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	
	int soma = somaAlgarismos(num);
	printf("A somos dos algarismos de %d eh %d", num, soma);
	
	getch();
}
