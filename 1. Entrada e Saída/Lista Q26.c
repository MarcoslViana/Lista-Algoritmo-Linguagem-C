#include <stdio.h>

void main(){
	float p1, p2, alt1, alt2, p3, p4, alt3, alt4, p5, p6, alt5, alt6, p7, p8, alt7, alt8;
	printf("Dupla 1 - Informe os pesos de cada jogador da dupla e em seguida suas alturas:");
	scanf("%f%f%f%f", &p1, &p2, &alt1, &alt2);
	printf("Dupla 2 - Informe os pesos de cada jogador da dupla e em seguida suas alturas:");
	scanf("%f%f%f%f", &p3, &p4, &alt3, &alt4);
	printf("Dupla 3 - Informe os pesos de cada jogador da dupla e em seguida suas alturas:");
	scanf("%f%f%f%f", &p5, &p6, &alt5, &alt6);
	printf("Dupla 4 - Informe os pesos de cada jogador da dupla e em seguida suas alturas:");
	scanf("%f%f%f%f", &p7, &p8, &alt7, &alt8);
	float somaPeso= p1+p2+p3+p4+p5+p6+p7+p8;
	float somaAltu= alt1+alt2+alt3+alt4+alt5+alt6+alt7+alt8;
	float pmDupla= somaPeso/4;
	float altmDupla= somaAltu/4;
	float pmTotal= somaPeso/8;
	float altmTotal= somaAltu/8;
	printf("O peso medio por dupla eh %.2f e a altura media eh %.2f \n", pmDupla, altmDupla);
	printf("O peso medio dos participantes eh %.2f e a altura media eh %.2f \n", pmTotal, altmTotal);
	getch();
}
