#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int idade;
    char nome[50];
    printf("Insira o seu nome: ");
    scanf("%[^\n]s",&nome);
    printf("Digite a suas idade: ");
    scanf("%i",&idade);
    if(idade>=18){
        printf("%s e maior de idade!",nome);
    }
    else{
        printf("%s e menor de idade!",nome);
    }
    return 0;
}