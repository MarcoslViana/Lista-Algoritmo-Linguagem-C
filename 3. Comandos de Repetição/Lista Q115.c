#include <stdio.h>
#include <math.h>

const int pessoas = 10;

void main(){
	
    int acima = 0, abaixo = 0, ideal = 0, k = 1;
    
    float peso, altura;

    while (k <= pessoas){

        printf("Digite o peso da pessoa:\n");
        scanf("%f", &peso);
        printf("Digite a altura da pessoa:\n");
        scanf("%f", &altura);

        float imc = peso / pow(altura, 2);

        if (imc < 18){
            abaixo++;
        }
        else if (imc > 25){
            acima++;
        }
        else if (imc >= 18 && imc <= 25){
            ideal++;
        }

        k++;
    }

    float acimap = (100 / pessoas) * acima;
    float abaixop = (100 / pessoas) * abaixo;
    float idealp = (100 / pessoas) * ideal;

    printf("O percentual de pessoas acima do peso e de %.2f\n", acimap);
    printf("O percentual de pessoas abaixo do peso e de %.2f\n", abaixop);
    printf("O percentual de pessoas na faixa do peso e de %.2f\n", idealp);
    
    getch();
}

