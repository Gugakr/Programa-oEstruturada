//6. Implemente uma função que transforme a primeira letra de cada palavra em maiúscula. Por exemplo,
//transforme a frase “Minha casa é branca” para “Minha Casa É Branca”.
#include <stdio.h>
#include <ctype.h>
void primeiraMaiuscula(char frase[]) {
    int i,inicioPalavra=1;
    for(i=0;frase[i]!='\0';i++){
        if(isalpha(frase[i])){
            if(inicioPalavra==1){
                frase[i]=toupper(frase[i]);
                inicioPalavra=0;
            }
        } else{
            inicioPalavra=1;
        }
    }
}
int main(){
    char frase[200];
    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);
    primeiraMaiuscula(frase);
    printf("\nFrase modificada: %s", frase);
    return 0;
}