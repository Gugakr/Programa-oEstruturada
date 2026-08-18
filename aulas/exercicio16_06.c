#include<stdio.h>
#define TAM 3
#define quanti_nome 30
int main(){
    char nome[TAM][quanti_nome]={"\0"},let;
    int i,j,verifica=0;
    printf("Digite 3 nomes: ");
    for(i=0;i<TAM;i++){
        scanf(" %[^\n]s",&nome[i]);
    }
    printf("\nEsses sao os nomes:\n ");
    for(i=0;i<TAM;i++){
        printf("%s\n",nome[i]);
    }
    printf("Insira uma letra pra ver se algum nome comeca com esse letra");
    scanf(" %c",&let);
    for(i=0;i<TAM;i++){
        for(j=0;j<quanti_nome;j++){
            if(let==nome[i][j]){
                verifica=1;
            }
        }
    }
    if(verifica!=1){
        printf("O nome %s comeca com a letra %c",nome[verifica],let);
    }
    else{
        printf("Nenhum nome comeca com essa letra %c",let);
    }
    return 0;
}