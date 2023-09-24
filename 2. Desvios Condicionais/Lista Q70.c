#include <stdio.h>

void main() {
    float l1, l2, l3;
    printf("Informe o valor dos tres lados do triangulo:");
    scanf("%f%f%f", &l1, &l2, &l3);
    
	
    if (l1 == l2 && l2 == l3) {
        printf("O triangulo eh equilatero");
    }
    else if (l1 != l2 && l1 != l3 && l2 != l3){
        printf("O triangulo eh escaleno");
    }
    else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("O triangulo eh isosceles");
    }
    
    
    getch();
}
