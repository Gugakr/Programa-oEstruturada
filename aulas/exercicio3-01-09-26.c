#include <stdio.h>
typedef struct{
    char nome[50];
    float nota1,nota2;
}Aluno;
void cadastrarAluno(Aluno *a){
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]",a->nome);
    printf("Digite a primeira nota: ");
    scanf("%f",&a->nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&a->nota2);
}
float mediaAluno(float n1, float n2) {
    return(n1 + n2)/2;
}
Aluno melhorAluno(Aluno alunos[],int tamanho){
    Aluno melhor=alunos[0];
    int i;
    for(i= 1;i<tamanho;i++){
        if(mediaAluno(alunos[i].nota1, alunos[i].nota2)>mediaAluno(melhor.nota1, melhor.nota2)){
            melhor=alunos[i];
        }
    }
    return melhor;
}
float mediaTurma(Aluno alunos[],int tamanho){
    float soma=0;
    int i;
    for(i=0;i<tamanho;i++){
        soma+=mediaAluno(alunos[i].nota1,alunos[i].nota2);
    }
    return soma/tamanho;
}
void exibirAprovados(Aluno alunos[],int tamanho) {
    int i;
    float media;
    printf("\n=== ALUNOS APROVADOS ===\n");
    for (i=0;i<tamanho;i++){
        media=mediaAluno(alunos[i].nota1,alunos[i].nota2);
        if(media >= 7.0){
            printf("\nNome: %s\n",alunos[i].nome);
            printf("Media: %.2f\n",media);
        }
    }
}
int main(){
    Aluno alunos[5];
    Aluno melhor;
    int i;
    printf("=== CADASTRO DOS ALUNOS ===\n");
    for(i=0;i<5;i++){
        printf("\n--- ALUNO %d ---\n",i+1);
        cadastrarAluno(&alunos[i]);
    }
    printf("\n\n=== MÉDIA DOS ALUNOS ===\n");
    for(i=0;i<5;i++){
        printf("\nNome: %s\n",alunos[i].nome);
        printf("Media: %.2f\n",mediaAluno(alunos[i].nota1, alunos[i].nota2));
    }
    melhor=melhorAluno(alunos,5);
    printf("\n=== MELHOR ALUNO ===\n");
    printf("Nome: %s\n",melhor.nome);
    printf("Nota 1: %.2f\n",melhor.nota1);
    printf("Nota 2: %.2f\n",melhor.nota2);
    printf("Media: %.2f\n",mediaAluno(melhor.nota1, melhor.nota2));
    printf("\n=== MÉDIA DA TURMA ===\n");
    printf("%.2f\n",mediaTurma(alunos, 5));
    exibirAprovados(alunos,5);
    return 0;
}