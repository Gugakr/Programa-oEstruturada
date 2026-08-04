#include<stdio.h>
void aste(int lado){
    int i,j;
    for(i=0;i<lado;i++){
        for(j=0;j<lado;j++){
            printf("*\t");
        }
        printf("\n");
    }
}

int main(){
    int lados;
    printf("Digite o numero dos lados: ");
    scanf("%i",&lados);
    aste(lados);
    return 0;
}