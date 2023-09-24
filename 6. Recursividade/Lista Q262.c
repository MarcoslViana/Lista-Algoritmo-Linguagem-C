#include <stdio.h>

int quociente(int x, int y){
    if (x < y) {
        return 0;
    }
    return 1 + quociente(x - y, y);
}

void main(){
    int x, y;
    
    printf("Digite o dividendo(x): ");
    scanf("%d", &x);
    printf("Digite o divisor(y): ");
    scanf("%d", &y);

    int resultado = quociente(x, y);
    printf("O quociente da divisao de %d por %d eh: %d", x, y, resultado);

    getch();
}
