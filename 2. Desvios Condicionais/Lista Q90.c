#include <stdio.h>

void main() {
    int mes;
    printf("Digite o numero correspondente ao mes (entre 1 e 12): ");
    scanf("%d", &mes);
    
    if (mes >= 1 && mes <= 12) {
        if (mes <= 3) {
            printf("O mes %d pertence ao 1� trimestre.\n", mes);
        } else if (mes <= 6) {
            printf("O mes %d pertence ao 2� trimestre.\n", mes);
        } else if (mes <= 9) {
            printf("O mes %d pertence ao 3� trimestre.\n", mes);
        } else {
            printf("O mes %d pertence ao 4� trimestre.\n", mes);
        }
    } else {
        printf("Numero de mes invalido.\n");
    }
    
	getch();
}






