#include<stdio.h>
void quadrado(int *n){
    *n=(*n)*(*n);
}
void cubo(int *n){
    *n=(*n)*(*n)*(*n);
}
int main(){
    int num,quad,cub;
    printf("Digite um numero: ");
    scanf("%i",&num);
    quad=num;
    cub=num;
    quadrado(&quad);
    cubo(&cub);
    printf("Quadrado: %i\n",quad);
    printf("Cubo: %i",cub);
    return 0;
}