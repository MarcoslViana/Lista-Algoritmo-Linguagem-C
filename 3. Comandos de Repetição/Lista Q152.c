#include <stdio.h>

void main() {
    
    	int num, divisor=2;
    
		printf("Informe um numero interiro positivo:");
  		scanf("%d", &num);
  	
  		while(num > 1){
  			
  			if(num % divisor == 0){
  				num = num/divisor;
  				printf("%d ", divisor);
  				
  				if(num > 1){
					printf("x ");
				}
			}

			else{
				divisor++;
			}
		}
	  
    	getch();
	}

