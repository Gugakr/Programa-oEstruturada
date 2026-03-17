#include<stdio.h>
#include<string.h>

int main(){
    char nome1[30],nome2[30],frase[525];
    int tam1, tam2;
    //strcpy(nome1,"Gustavo");
    //printf("Nome1: %S\n",nome1);
    printf("Digite um nome1:");
    gets(nome1);
    //scanf("%[^\n]s",nome1);
    printf("Digite um nome2:");
    gets(nome2);
    //scanf("%[^\n]s",nome2);
    tam1 = strlen(nome1);
    tam2 = strlen(nome2);
    printf("nome1: %s Tamanho: %i\n",nome1,tam1);
    printf("nome2: %s Tamanho: %i\n",nome2,tam2);
    printf("Comparacao: %i",strcmp(nome1,nome2));
    strcpy(frase,nome1);
    //strcat(" ");
   //strcat(frase,nome2);
    //printf("nome1 e nome2 é: %s",frase);
    //strcpy(nome1,nome2);
    //printf("Nome1: %s\n",nome1);
    return 0;
}