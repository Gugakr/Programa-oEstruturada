//4. Faça um programa que leia dois números utilizando variáveis do tipo caractere e calcule a soma dos
//valores lidos. Imprima os três valores na tela.
#include <stdio.h>
int main(){
    char num1,num2;
    int n1,n2,soma;
    printf("Digite o primeiro numero: ");
    scanf(" %c",&num1);
    printf("Digite o segundo numero: ");
    scanf(" %c",&num2);
    n1=num1-'0';
    n2=num2-'0';
    soma=n1+n2;
    printf("\nPrimeiro valor: %d", n1);
    printf("\nSegundo valor: %d", n2);
    printf("\nSoma: %d\n", soma);
    return 0;
}