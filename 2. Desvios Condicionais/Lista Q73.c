#include <stdio.h>

void main(){
	int n1, n2, n3, maior, menor;
	
	printf("Informe tres numeros inteiros distintos:");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if(n1 != n2 && n1 != n3 && n2 != n3){ // Verifica se os tr�s n�meros informados s�o distintos
		// Identifica o maior n�mero
		if(n1 > n2 && n1 > n3){
			maior = n1;
		}
		else if(n2 > n1 && n2 > n3){
			maior = n2;
		}
		else if(n3 > n1 && n3 > n2){
			maior = n3;
		}
		//Identifica o menor n�mero
		if(n1 < n2 && n1 < n3){
			menor = n1;
		}
		else if(n2 < n1 && n2 < n3){
			menor = n2;
		}
		else if(n3 < n1 && n3 < n2){
			menor = n3;
		}
		
		printf("O maior eh %d e o menor eh %d", maior, menor);	
	}
	else {
		printf("Os tres numeros informados nao sao distintos");
	}
	
	getch();
}
