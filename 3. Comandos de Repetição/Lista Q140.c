#include <stdio.h>

void main(){
	
	int num, par=0, impar=0, somaImp=0, somaPar=0;
	
	do{
		
		printf("Informe um numero:");
		scanf("%d", &num);
		
		if(num%2 == 0){
			par++;
			somaPar += num;
		}
		
		else if(num%2 != 0){
			impar++;
			somaImp += num;
		}
			
	} while(num!=0);
	
	float mPar = somaPar / par;
	float mImp = somaImp / impar;
	
	printf("A media dos numeros pares eh %.2f\n", mPar);
	printf("A media dos numeros impares eh %.2f", mImp);
	
	getch();
}
