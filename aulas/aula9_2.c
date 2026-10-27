#include<stdio.h>
int main(){
    int x,cont=0;
    do{
        printf("\nInsira um numero:\n ");
        scanf("%i",&x);
        print("\nO numero digitado foi: %i",x);
        cont++;
    }while(x>=0);
    cont--;
    printf("\nForam digitados %i numeros!",cont);
    return 0;
}