#include <stdio.h>

void main(){
	float distancia, tempo, minutos;
	printf("Informe a distancia em KM e o tempo em horas e minutos:");
	scanf("%f%f%f", &distancia, &tempo, &minutos);
	float distMetro= distancia*1000;
	float minSeg= minutos*60;
	float tempSeg= (tempo*3600) + minSeg;
	float velocM= distMetro/tempSeg;
	printf("A velocidade media eh %.2f m/s", velocM);
	getch();
}
