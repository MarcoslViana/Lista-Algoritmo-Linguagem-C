#include <stdio.h>

void main (){
	
	int m, n, k, i;
	printf("Informe dois numeros inteiros:");
	scanf("%d%d", &m, &n);
	
	for(k=m; k<=n; k++){
		int divisores = 0;
		
		for(i=1; i<=k; i++){
			if(k%i == 0){
				divisores++;
			}
		}
		if(divisores == 2){
			printf("%d ", k);
		}
	}
	getch();
}
