#include <stdio.h>

int resto(int x, int y) {
    if (x < y) {
        return x;
    }
    return resto(x - y, y);
}

int main() {
    int x, y;
    
    printf("Digite o dividendo(x): ");
    scanf("%d", &x);
    printf("Digite o divisor(y): ");
    scanf("%d", &y);

    int resultado = resto(x, y);
    printf("O resto da divisao de %d por %d eh: %d", x, y, resultado);

    getch();
}
