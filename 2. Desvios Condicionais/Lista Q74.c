#include <stdio.h>

void main(){
	int n1, n2, n3, maior, meio, menor;
	
	printf("Informe tres numeros inteiros distintos:");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if(n1 != n2 && n1 != n3 && n2 != n3){ // Verifica se os três números informados são distintos
		if(n1 > n2 && n1 > n3){
			maior = n1;
			if(n2 > n3){
				meio = n2;
				menor = n3;
			}
			else{
				meio = n3;
				menor = n2;	
			}
		}
		else if(n2 > n1 && n2 > n3){
			maior = n2;
			if(n1 > n3){
				meio = n1;
				menor = n3;
			}
			else{
				meio = n3;
				menor = n1;
			}
		}
		else if(n3 > n1 && n3 > n2){
			maior = n3;
			if(n1 > n2){
				meio = n1;
				menor = n2;
			}
			else{
				meio = n2;
				menor = n1;
			}
		}
		
		printf("O numero que nao eh nem o maior nem o menor eh: %d", meio);
	}
	else {
		printf("Os tres numeros informados nao sao distintos");
	}
	
	getch();
}
