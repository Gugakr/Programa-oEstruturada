#include<stdio.h>
#include<string.h>
int main(){
    char nome[100];
    int tam;
    printf("Digite o seu nome:");
    scanf("%[^\n]s",nome);
    tam=strlen(nome);
    if (tam<10)
    {
        printf("nome curtin doido");
    }
    else{
        printf("nome normal bruh");
    }
    return 0;
    
}