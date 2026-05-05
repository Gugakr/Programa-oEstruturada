#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,resul;
    char sim;
    printf("Digite o primeiro numero:\n ");
    scanf("%i",&n1);
    printf("Digite o segundo numero:\n ");
    scanf(" %i",&n2);
    printf("Digite a opcao aritimetica que vc quer usar\n");
    scanf(" %c",&sim);
    switch (sim){
    case '+':
        resul=n1+n2;
        printf("Esse e o resultado da operacao: %i",resul);
        break;
        case '-':
        resul=n1-n2;
        printf("Esse e o resultado da operacao: %i",resul);
        break;
        case '*':
        resul=n1*n2;
        printf("Esse e o resultado da operacao: %i",resul);
        break;
        case '/':
        resul=n1/n2;
        printf("Esse e o resultado da operacao: %i",resul);
        break;
        case '~':
        resul=pow(n1,n2);
        printf("Esse e o resultado da operacao: %i",resul);
        break;
    }
    return 0;
}