#include <stdio.h>

const int quantidade = 6;

void main(){
	
	int k, numDiv=0, primo1=2, primo2=2, contador=0;
	
	while(contador < quantidade){
		
		for(k=1; k<=primo1; k++){
	
			if(primo1 % k == 0){
				numDiv++;	
			}
		}
	
		if(numDiv == 2){
			if(primo1 - primo2 == 2){
				printf("(%d, %d) ", primo2, primo1);
				contador++;
			}
			primo2=primo1;	
		}
	
		numDiv=0;
		primo1++;
	}	
	getch();
}
