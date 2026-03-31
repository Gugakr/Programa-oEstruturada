#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char nome[50],nome2[50];
    int resp;
    printf("Digite o nome 1: ");
    scanf(" %[^\n]",&nome);
    printf("Digite o nome 2: ");
    scanf(" %[^\n]",&nome2);
    resp=strcmp(nome,nome2);
    if(resp==0){
        printf("Os nomes sao ingualais");
    }
    else{
        printf("Os nome tao diferente");
    }
    return 0;
}