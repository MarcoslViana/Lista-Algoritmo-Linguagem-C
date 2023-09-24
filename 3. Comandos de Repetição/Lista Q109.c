#include <stdio.h>

void main(){
	
	int num, m, n, k;
	
	printf("Informe dois numeros inteiros:");
	scanf("%d%d", &m, &n);
	printf("Informe um numero inteiro:");
	scanf("%d", &num);
	
	for(k=m; k<=n; k++){
		if(num%k==0){
			printf("%d ", k);
		}
	}
	
	getch();
	
}
