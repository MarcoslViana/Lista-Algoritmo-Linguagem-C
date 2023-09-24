#include <stdio.h>

void main(){
	int m, n, k, soma=0, quant=0;
	printf("Informe dois numeros inteiros:");
	scanf("%d%d", &m, &n);
	if(m<n){
		for(k=m+1;k<n;k++){
			soma= soma+k;
			quant= quant+1;
		}
	}
	else if(m>n){
		for(k=m-1;k>n;k--){
			soma= soma+k;
			quant= quant+1;
		}
	}
	float media= (float)soma/quant;
	printf("A media dos numeros do intervalo eh %.1f", media);
	getch();
}
