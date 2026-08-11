#include<stdio.h>
#include<string.h>
typedef struct{
    char nome[50];
    int idade;
    float altura;
}Pessoa;
void exibirP(Pessoa p){
    printf("\nNome: %s\n", p.nome);
    printf("Idade: %d anos\n",p.idade);
    printf("Altura: %.2f metros\n",p.altura);
}
Pessoa lerpessoa(){
    Pessoa p;
    printf("Digite o nome: ");
    scanf(" %[^\n]",p.nome);
    printf("Digite a idade: ");
    scanf("%d",&p.idade);
    printf("Digite a altura: ");
    scanf("%f",&p.altura);
    return p;
}
int ehMaiordeIdade(Pessoa p){
    if(p.idade>=18){
        return 1;
    } else{
        return 0;
    }   
}
Pessoa maisVelha(Pessoa p1, Pessoa p2){
    if(p1.idade>p2.idade){
        return p1;
    }else{
        return p2;
    }
}
int main(){
    Pessoa p1,p2,maisVP;
    printf("=== CADASTRO DA PRIMEIRA PESSOA ===\n");
    p1=lerpessoa();
    printf("\n=== CADASTRO DA SEGUNDA PESSOA ===\n");
    p2=lerpessoa();
    printf("\n=== PRIMEIRA PESSOA===");
    exibirP(p1);
    printf("\n=== SEGUNDA PESSOA===");
    exibirP(p2);
    if(ehMaiordeIdade(p1)){
        printf("\n%s e maior de idade.\n",p1.nome);
    } else{
        printf("\n%s e menor de idade.\n",p1.nome);
    }
    maisVP=maisVelha(p1,p2);
    printf("\n=== PESSOA MAIS VELHA ===");
    exibirP(maisVP);

    return 0;
}