#include <stdio.h>
typedef struct{
    char marca[50],modelo[50];
    int ano;
    float preco;
}Carro;
Carro cadastrarCarros(){
    Carro carros[5];
    Carro maisNovo;
    int i;
    for(i=0;i<5;i++){
        printf("\n--- CARRO %d ---\n",i+1);
        printf("Digite a marca: ");
        scanf(" %[^\n]",carros[i].marca);
        printf("Digite o modelo: ");
        scanf(" %[^\n]",carros[i].modelo);
        printf("Digite o ano: ");
        scanf("%d",&carros[i].ano);
        printf("Digite o preco: ");
        scanf("%f",&carros[i].preco);
    }
    maisNovo = carros[0];
    for(i=1;i<5;i++){
        if (carros[i].ano>maisNovo.ano){
            maisNovo=carros[i];
        }
    }
    return maisNovo;
}
int main(){
    Carro carroMaisNovo;
    printf("=== CADASTRO DE CARROS ===\n");
    carroMaisNovo=cadastrarCarros();
    printf("\n=== CARRO MAIS NOVO ===\n");
    printf("Marca: %s\n",carroMaisNovo.marca);
    printf("Modelo: %s\n",carroMaisNovo.modelo);
    printf("Ano: %d\n",carroMaisNovo.ano);
    printf("Preco: R$ %.2f\n",carroMaisNovo.preco);
    return 0;
}