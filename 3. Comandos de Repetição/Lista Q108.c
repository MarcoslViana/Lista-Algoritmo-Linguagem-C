#include <stdio.h>

const int qtd = 20;

void main(){
	
	int num_cand, k, PT=0, PTB=0, PMDB=0, DEM=0, PSDB=0, PCdoB=0, nulo=0;
	
	for(k=0; k<=qtd; k++){
		printf("Informe um numero:");
		scanf("%d", &num_cand);
		
		int num_part = num_cand / 1000;
		
		switch(num_part){
			case 13: PT++; break;
			case 14: PTB++; break;
			case 15: PMDB++; break;
			case 25: DEM++; break;
			case 45: PSDB++; break;
			case 65: PCdoB++; break;
		} 
	}
	
	printf("PT: %d eleitos\n", PT);
	printf("PTB: %d eleitos\n", PTB);
	printf("PMDB: %d eleitos\n", PMDB);
	printf("DEM: %d eleitos\n", DEM);
	printf("PSDB: %d eleitos\n", PSDB);
	printf("PCdoB: %d eleitos\n", PCdoB);
	
	getch();
	
}

