#include <stdio.h>

void main() {
	
    int m, n, k, i, primos=0;
    float soma=0;
    
    printf("Informe dois numeros inteiros:");
    scanf("%d%d", &m, &n);
    
    for (k = m; k <= n; k++){
		int numDiv=0 ;
		
        for (i = 1; i <= k; i++){
            if (k % i == 0){
                numDiv++;
            }   
        } 
        
        if (numDiv == 2){
            soma = soma + k;
            primos++;
        }
    }
    
    float media = soma / primos;
    
    printf("A media aritmetica dos numeros primos do intervalo de %d a %d eh %.1f", m, n, media);
    
    getch(); 
}

