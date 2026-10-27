#include<stdio.h>
int main(){
    int i,j,quant,exe;
    printf("Quantas vezes quer mostrar asteriscos na tela:\n");
    scanf("%i",&exe);
    for(i=0;i<exe;i++){
        printf("\nInsira a quantidade de asteriscos\n");
        scanf("%i",&quant);
        for(j=0;j<=quant;j++){
            printf("*");
        }
    }
    return 0;
}