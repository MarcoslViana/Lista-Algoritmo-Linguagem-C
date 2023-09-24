#include <stdio.h>

void main(){
	
    int num, soma=1, numero=1;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    while (soma <= num){
    	
        printf("%d ", numero);
        numero++;
        soma = soma + numero;
    }
    getch();
}
