#include<stdio.h>
typedef struct{
    char modelo[50];
    int ano;
    float preco;
}carro;
void lerCarro(carro *p){
    printf("Digite o modelo do carro: ");
    scanf(" %49[^\n]",p->modelo);
    printf("Digite o ano de fabricacao:");
    scanf("%d",&p->ano);
    printf("Digite o preco do carro: ");
    scanf("%f",&p->preco);
}
void exibirCarro(carro *p){
    printf("\n\nModelo: %s",p->modelo);
    printf("\nAno de fabricacao: %d",p->ano);
    printf("\nPreco: %.2f",p->preco);
}
carro *MaisNovo(carro carros[],int quant){
    int i;
    carro *novo=&carros[0];
    for(i=1;i<quant;i++){
        if(carros[i].ano>novo->ano){
            novo=&carros[i];
        }
    }
    return novo;
}
float mediapreco(carro carros[],int quant){
    int i;
    float soma=0;
    for(i=0;i<quant;i++){
        soma+=carros[i].preco;
    }
    return soma/quant;
}
int main(){
    carro carros[5];
    carro *novo;
    float media;
    int i;
    for(i=0;i<5;i++){
        printf("Cadastro do carro %d\n",i+1);
        lerCarro(&carros[i]);
    }
    printf("\n==== CARROS CADASTRADOS ====\n");
    for(i=0;i<5;i++){
        exibirCarro(&carros[i]);
    }
    novo=MaisNovo(carros,5);
    printf("\n==== CARRO MAIS NOVO ====\n");
    printf("Modelo: %s\n",novo->modelo);
    printf("Ano: %d\n",novo->ano);
    media=mediapreco(carros,5);
    printf("\nMedia dos precos: R$ %.2f\n",media);
    return 0;
}
