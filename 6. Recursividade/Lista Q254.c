#include <stdio.h>

int produto(int x, int y){
	if (y == 0) {
        return 0;
    } else if (y > 0) {
        return x + produto(x, y - 1);
    } else {
        return -produto(x, -y);
    }
}

void main(){
	int x, y;
	
	printf("Informe dois numeros inteiros (X,Y): ");
	scanf("%d%d", &x, &y);
	
	int calcProd = produto(x, y);
	printf("O produto de %d(X) por %d(Y) eh: %d", x, y, calcProd);
	
	getch();
}
