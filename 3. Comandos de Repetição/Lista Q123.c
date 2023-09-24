#include <stdio.h>

void main(){
	
    int m, n, k, contador = 0, numero = 1;

    printf("Digite dois numeros inteiros (M e N): ");
    scanf("%d %d", &m, &n);

    while (contador < n){
        
		int numDiv = 0;

        for (k = 1; k <= numero; k++){
            if (numero % k == 0){
                numDiv++;
            }
        }
        
        if(numero >= m && numDiv == 2){
        	printf("%d ", numero);
        	contador++;
		}

        numero++;
    }
	getch();
}
