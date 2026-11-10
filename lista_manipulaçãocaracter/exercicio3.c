//3. Faça um programa que leia uma frase e a imprima na tela invertendo todas as letras de maiúsculas
//para minúsculas ou vice-versa. 
#include <stdio.h>
#include <ctype.h>
int main() {
    char frase[200];
    int i;
    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);
    for(i=0;frase[i]!='\0';i++) {
        if(islower(frase[i])){
            frase[i]=toupper(frase[i]);
        } else if(isupper(frase[i])){
            frase[i]=tolower(frase[i]);
        }
    }
    printf("\nFrase modificada: %s",frase);
    return 0;
}