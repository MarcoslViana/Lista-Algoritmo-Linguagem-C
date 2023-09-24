#include <stdio.h>

void main() {
    char nome1[30], nome2[30], nome3[30];
    int votos1, votos2, votos3;

    printf("Digite o nome do primeiro candidato e sua quantidade de votos recebidos:");
    scanf("%s%d", &nome1, &votos1);
    printf("Digite o nome do segundo candidato e sua quantidade de votos recebidos:");
    scanf("%s%d", &nome2, &votos2);
    printf("Digite o nome do terceiro candidato e sua quantidade de votos recebidos:");
    scanf("%s%d", &nome3, &votos3);

    float total_votos = votos1 + votos2 + votos3;
	float perc_cand1 = (votos1/total_votos)*100;
	float perc_cand2 = (votos2/total_votos)*100;
	float perc_cand3 = (votos3/total_votos)*100;
	
    printf("\nPercentual de votos recebidos por cada candidato:\n");
    printf("%s: %.2f%%\n", nome1, perc_cand1);
    printf("%s: %.2f%%\n", nome2, perc_cand2);
    printf("%s: %.2f%%\n", nome3, perc_cand3);

    getch();
}

