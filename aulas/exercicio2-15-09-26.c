#include <stdio.h>
typedef struct{
    char nome[50];
    int idade;
    float altura;
}Pessoa;
void exibirPessoa(Pessoa *p){
    printf("\nNome: %s\n",p->nome);
    printf("Idade: %d\n",p->idade);
    printf("Altura: %.2f\n",p->altura);
}
void altIdade(Pessoa *p, int novaIdade){
    p->idade=novaIdade;
}
void alterarAltura(Pessoa *p, float novaAltura){
    p->altura=novaAltura;
}
void dadosSeMaior(Pessoa *p, int *idade, float *altura){
    if(p->idade>18){
        *idade=p->idade;
        *altura=p->altura;
    }
}
int main(){
    Pessoa pessoa;
    int novaIdade,idade;
    float novaAltura,altura;
    printf("Digite o nome: ");
    scanf(" %[^\n]",pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d",&pessoa.idade);
    printf("Digite a altura: ");
    scanf("%f",&pessoa.altura);
    printf("\n=== DADOS DA PESSOA ===\n");
    exibirPessoa(&pessoa);
    printf("\nDigite a nova idade: ");
    scanf("%d",&novaIdade);
    altIdade(&pessoa,novaIdade);
    printf("Digite a nova altura: ");
    scanf("%f",&novaAltura);
    alterarAltura(&pessoa,novaAltura);
    printf("\n=== DADOS ALTERADOS ===\n");
    exibirPessoa(&pessoa);
    dadosSeMaior(&pessoa,&idade,&altura);
    if (pessoa.idade > 18){
        printf("\n=== PESSOA MAIOR DE 18 ANOS ===\n");
        printf("Idade: %d\n",idade);
        printf("Altura: %.2f\n",altura);
    } else{
        printf("\nA pessoa nao possui mais de 18 anos.\n");
    }
    return 0;
}