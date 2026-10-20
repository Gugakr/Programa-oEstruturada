#include <stdio.h>
typedef struct{
    char nome[50];
    int idade;
    float salario;
} Funcionario;
void lerFuncionario(Funcionario *p){
    printf("Digite o nome: ");
    scanf(" %49[^\n]", p->nome);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite o salario: ");
    scanf("%f", &p->salario);
}
void exibirFuncionario(Funcionario *p){
    printf("\nNome: %s", p->nome);
    printf("\nIdade: %d", p->idade);
    printf("\nSalario: R$ %.2f\n", p->salario);
}
Funcionario *maiorSalario(Funcionario funcionarios[], int qtd){
    int i;
    Funcionario *maior = &funcionarios[0];
    for (i = 1; i < qtd; i++){
        if (funcionarios[i].salario > maior->salario) {
            maior = &funcionarios[i];
        }
    }
    return maior;
}
int main(){
    Funcionario funcionarios[5];
    Funcionario *melhor;
    int i;
    for (i = 0; i < 5; i++){
        printf("\nCadastro do funcionario %d\n", i + 1);
        lerFuncionario(&funcionarios[i]);
    }
    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
    for (i = 0; i < 5; i++){
        exibirFuncionario(&funcionarios[i]);
    }
    melhor = maiorSalario(funcionarios, 5);
    printf("\n===== MAIOR SALARIO =====\n");
    printf("Nome: %s\n", melhor->nome);
    printf("Salario: R$ %.2f\n", melhor->salario);
    return 0;
}
