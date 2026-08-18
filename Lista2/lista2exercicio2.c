#include<stdio.h>
int main(){
    char nome[100],nome2[100];
    int tam,tam2;
    printf("Digite o nome 1: ");
    scanf("%[^\n]s",nome);
    printf("Digite o nome 2: ");
    scanf(" %[^\n]s",nome2);
    tam=strlen(nome);
    tam2=strlen(nome2);
    if(tam==tam2){
        printf("Os nomes tem tamanhos enguais");
    }
    else{
        printf("Os nomes nao tem tamanhos enguais, nome 1 tem %i e nome 2 tem %i",tam,tam2);
    }
}