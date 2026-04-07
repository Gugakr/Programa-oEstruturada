#include<stdio.h>
int main(){
    int dia,mes,ano,dqv;
    char nome[50];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o dia,mes e o ano que voce nasceu: ");
    scanf("%i%i%i",&dia,&mes,&ano);
    dqv=(2026-ano)*365;
    printf("%s Voce ja viveu: %i dias",nome,dqv);
    return 0;
}