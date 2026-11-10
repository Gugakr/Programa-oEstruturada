/* 2. Faça um programa que leia uma frase e, a partir dela, gere duas novas strings, uma contendo somente
as letras e outra contendo todos os outros tipos de caracteres inseridos. */
#include <stdio.h>
#include <ctype.h>
int main(){
    char frase[200],letras[200],outros[200];
    int i,j=0,k=0;
    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);
    for(i=0;frase[i]!='\0';i++){
        if (isalpha(frase[i])){
            letras[j]=frase[i];
            j++;
        }else{
            outros[k]=frase[i];
            k++;
        }
    }
    letras[j]='\0';
    outros[k]='\0';
    printf("\nSomente letras: %s",letras);
    printf("\nOutros caracteres: %s",outros);
    return 0;
}