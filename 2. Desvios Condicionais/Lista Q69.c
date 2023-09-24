#include <stdio.h>

void main() {
    float x, y;

    printf("Digite as coordenadas x e y do ponto: ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) pertence ao primeiro quadrante.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) pertence ao segundo quadrante.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) pertence ao terceiro quadrante.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) pertence ao quarto quadrante.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("O ponto (%.2f, %.2f) está na origem.\n", x, y);
    } else if (x == 0) {
        printf("O ponto (%.2f, %.2f) está sobre o eixo y.\n", x, y);
    } else if (y == 0) {
        printf("O ponto (%.2f, %.2f) está sobre o eixo x.\n", x, y);
    }

    getch();
}

