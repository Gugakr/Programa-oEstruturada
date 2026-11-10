//1. Faça um programa que leia uma frase e gere uma segunda frase somente com os números contidos na
//primeira. Imprima as duas na tela.
#include <stdio.h>
#include <ctype.h>
int main() {
    char frase[100],numeros[100];
    int i,j=0;
    printf("Digite uma frase: ");
    fgets(frase,100,stdin);
    for(i=0;frase[i]!='\0';i++){
        if(isdigit(frase[i])){
            numeros[j]=frase[i];
            j++;
        }
    }
    numeros[j]='\0';
    printf("\nFrase original: %s", frase);
    printf("Numeros: %s\n", numeros);
    return 0;
}