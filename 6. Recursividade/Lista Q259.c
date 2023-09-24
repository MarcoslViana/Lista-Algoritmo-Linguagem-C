#include <stdio.h>

void Hexadecimal(int num){
    if (num == 0) {
        return;
    } else {
        Hexadecimal(num / 16);
        int resto = num % 16;
        if (resto < 10) {
            printf("%d", resto);
        } else {
            printf("%c", 'A' + resto - 10);
        }
    }
}

void main(){
	
    int num;
    printf("Digite um numero decimal: ");
    scanf("%d", &num);

    printf("O valor hexadecimal correspondente eh: ");
    if (num == 0) {
        printf("0");
    } else {
        Hexadecimal(num);
    }
    printf("\n");

    getch();
}


