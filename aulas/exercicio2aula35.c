#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void lerString(int tam,int *letras,int *numeros){
    char *str;
    int i;
    str=(char*)malloc((tam+1)*sizeof(char));
    printf("Digite uma string: ");
    scanf(" %s",str);
    *letras=0;
    *numeros=0;
    for(i=0;str[i]!='\0';i++){
        if (isalpha((unsigned char)str[i])){
            (*letras)++;
        }
        if (isdigit((unsigned char)str[i])){
            (*numeros)++;
        }
    }
    printf("\nString digitada: %s\n",str);
    free(str);
}
int main(){
    int tam,letras,numeros;
    printf("Digite o tamanho da string: ");
    scanf("%d",&tam);
    lerString(tam,&letras,&numeros);
    printf("Quantidade de letras: %d\n",letras);
    printf("Quantidade de numeros: %d\n",numeros);
    return 0;
}