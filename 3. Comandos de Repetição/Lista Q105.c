#include <stdio.h>

void main(){
	int m, n, k, soma=0;
	printf("Informe dois numeros inteiros:");
	scanf("%d%d", &m, &n);
	if(m<n){
		for(k=m;k<=n;k++){
			soma= soma+k;
		}
	}
	else if(m>n){
		for(k=m;k>=n;k--){
			soma= soma+k;
		}
	}
	printf("A soma dos numeros do intervalo eh %d", soma);
	getch();
}
