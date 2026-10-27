#include<stdio.h>
int main(){
    float preco,precof,desc;
    int condi;
    printf("Digite o valor do produto:\n ");
    scanf("%f",&preco);
    printf("Digite a condicao de pagamento\n ");
    scanf(" %i",&condi);
    switch (condi){
    case 1:
        desc=(preco*10)/100;
        precof=preco-desc;
        printf("Esse e o preco final: %.2f",precof);
        break;
        case 2:
        desc=(preco*5)/100;
        precof=preco-desc;
        printf("Esse e o preco final: %.2f",precof);
        break;
        case 3:
        printf("Esse e o preco final: %.2f",preco);
        break;
        case 4:
        desc=(preco*10)/100;
        precof=preco+desc;
        printf("Esse e o preco final: %.2f",precof);
        break;
    }
    return 0;
}