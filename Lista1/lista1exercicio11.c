#include<stdio.h>
int main(){
    float precof,lucro,imposto,npreco;
    printf("Digite o preco de fabrica do carro: ");
    scanf("%f",&precof);
    printf("Digite o percentual do lucro: ");
    scanf("%f",&lucro);
    printf("Digite o percentual de impostos: ");
    scanf("%f",&imposto);
    lucro=(precof/100)*lucro;
    imposto=(precof/100)*imposto;
    npreco=precof+lucro+imposto;
    printf("O lucro do distribuidor e: %.2f\n",lucro);
    printf("O imposto a pagar e: %.2f\n",imposto);
    printf("O preco final do carro e: %.2f",npreco);
    return 0;
}