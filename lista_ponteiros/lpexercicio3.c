#include<stdio.h>
float lerValores(int *quantidade){
    float numero, soma=0;
    *quantidade=0;
    do{
        printf("Digite um valor positivo (0 para parar):");
        scanf("%f",&numero);
        if(numero>0){
            soma+=numero;
            (*quantidade)++;
        }
    }while(numero!=0);
    if(*quantidade>0){
        return soma / *quantidade;
    }
    return 0;
}
int main(){
    int quant;
    float media;
    media=lerValores(&quant);
    printf("Quantidade de numeros lidos: %d\n",quant);
    printf("Media aritmetica: %.2f\n",media);
    return 0;
}