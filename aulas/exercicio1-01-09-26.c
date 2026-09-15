#include <stdio.h>
typedef struct{
    char nome[50],cargo[50];
    float salario;
}Funcionario;
void mostrarMaiorMenor(Funcionario funcionarios[],int tamanho){
    int posMaior=0,posMenor=0,i;
    for(i=1;i<tamanho;i++){
        if (funcionarios[i].salario>funcionarios[posMaior].salario){
            posMaior=i;
        }
        if (funcionarios[i].salario<funcionarios[posMenor].salario){
            posMenor=i;
        }
    }
    printf("\n=== FUNCIONARIO COM MAIOR SALARIO ===\n");
    printf("Nome: %s\n",funcionarios[posMaior].nome);
    printf("Cargo: %s\n",funcionarios[posMaior].cargo);
    printf("Salario: R$ %.2f\n",funcionarios[posMaior].salario);
    printf("\n=== FUNCIONARIO COM MENOR SALARIO ===\n");
    printf("Nome: %s\n",funcionarios[posMenor].nome);
    printf("Cargo: %s\n",funcionarios[posMenor].cargo);
    printf("Salario: R$ %.2f\n",funcionarios[posMenor].salario);
}
int main(){
    int i;
    Funcionario funcionarios[10];
    printf("=== CADASTRO DE FUNCIONARIOS ===\n");
        for(i=0;i<10;i++){
        printf("\n--- FUNCIONARIO %d ---\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]",funcionarios[i].nome);
        printf("Digite o cargo: ");
        scanf(" %[^\n]",funcionarios[i].cargo);
        printf("Digite o salario: ");
        scanf("%f",&funcionarios[i].salario);
    }
    mostrarMaiorMenor(funcionarios, 10);
    return 0;
}