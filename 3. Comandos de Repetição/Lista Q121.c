#include <stdio.h>

void main(){
	
    int termoIn, razao, num;

    printf("Digite o termo inicial: ");
    scanf("%d", &termoIn);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    printf("Digite o valor de N: ");
    scanf("%d", &num);

    if(razao > 0){
        
        int termo = termoIn;
        while (termo <= num){
            printf("%d ", termo);
            termo = termo + razao;
        }    
    } 
	else if(razao < 0){
        
        int termo = termoIn;
        while (termo >= num){
            printf("%d ", termo);
            termo = termo + razao;
        }
    }

    getch();
}
