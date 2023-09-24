#include <stdio.h>
#include <math.h>

void main() {
    float salario, valEnt, poupanca;
    int anos, meses;

    printf("Digite o valor do salario:");
    scanf("%f", &salario);
    printf("Digite o valor da entrada desejada:");
    scanf("%f", &valEnt);

    poupanca = salario * 0.25;
    meses = valEnt / poupanca;
    anos = meses / 12;
    meses = meses % 12;

    printf("Sera necessario poupar por %d anos e %d meses para juntar R$%.2f para a entrada do carro", anos, meses, valEnt);

    getch();
}

