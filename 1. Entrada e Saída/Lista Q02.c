#include <stdio.h>

void main(){
	float n1,n2,n3,n4,p1,p2,p3,p4;
	printf("Informe cada nota seguida de seu respectivo peso:");
	scanf("%f%f%f%f%f%f%f%f", &n1,&p1,&n2,&p2,&n3,&p3,&n4,&p4);
	float mediaPond= ((n1*p1)+(n2*p2)+(n3*p3)+(n4*p4))/(p1+p2+p3+p4);
	printf("A media ponderada eh %.1f", mediaPond);
	getch();
}
