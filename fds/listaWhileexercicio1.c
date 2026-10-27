#include<stdio.h>
int main(){
    int num,cont,fato;
    printf("Digite um numero: ");
    scanf("%i",&num);
    cont=num-1;
    fato=num;
    while(cont>0){
        fato=fato*cont;
         cont--;
    }
    printf("\nO fatorial do numero e %i",fato);
    return 0;

}