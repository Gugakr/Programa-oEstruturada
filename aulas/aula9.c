#include<stdio.h>
int main(){
    int x, cont;
    printf("Digite um valor: ");
    scanf("%i",&x);
    cont=1;
    printf("\no numero digitado foi %i",x);
    while (x>=0){
        printf("Insira um numero:\n ");
        scanf("%i",&x);
        printf("\nO numero digitado foi: %i",x);
        cont++;
    }
    cont--;
    printf("\nForam digitados %i numeros!",cont);
    return 0;
    
}