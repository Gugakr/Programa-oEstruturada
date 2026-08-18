#include<stdio.h>
int main(){
    float peso,pesop;
    int planeta;
    printf("Digite o seu peso:\n ");
    scanf("%f",&peso);
    printf("Digite o numero do planeta que voce quer ver seu peso nele\n");
    scanf(" %i",&planeta);
    switch (planeta){
        case 1:
        pesop=peso*0.37;
        printf("Esse e seu peso em Mercurio: %.2f",pesop);
        break;
        case 2:
        pesop=peso*0.88;
        printf("Esse e seu peso em Venus: %.2f",pesop);
        break;
        case 3:
        pesop=peso*0.38;
        printf("Esse e seu peso em Marte: %.2f",pesop);
        break;
        case 4:
        pesop=peso*2.64;
        printf("Esse e seu peso em Jupiter: %.2f",pesop);
        break;
        case 5:
        pesop=peso*1.15;
        printf("Esse e seu peso em Saturno: %.2f",pesop);
        break;
        case 6:
        pesop=peso*1.17;
        printf("Esse e seu peso em Urano: %.2f",pesop);
        break;
    }
    return 0;
}