//5. Crie uma função que conte quantas palavras existem em uma frase.
#include <stdio.h>
#include <ctype.h>
int contarPalavras(char frase[]){
    int i,palavras=0,dentroPalavra=0;
    for(i=0;frase[i]!='\0';i++){
        if(isalpha(frase[i])){
            if(dentroPalavra==0){
                palavras++;
                dentroPalavra=1;
            }
        } else{
            dentroPalavra=0;
        }
    }
    return palavras;
}
int main(){
    char frase[200];
    int quantidade;
    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);
    quantidade=contarPalavras(frase);
    printf("Quantidade de palavras: %d\n",quantidade);
    return 0;
}