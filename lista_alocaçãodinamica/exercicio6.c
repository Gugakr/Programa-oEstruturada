//6) Faça um programa que preencha uma matriz com uma quantidade par de valores inteiros
//determinados pelo usuário. Determine e mostre os números superiores a trinta e suas respectivas
//posições. A matriz deve possuir somente duas colunas e o número de linhas necessário deve ser
//determinado através da quantidade fornecida pelo usuário. O programa deverá mostrar uma
//mensagem se não existir nenhum número que atenda a esta condição.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int **mat,quantidade,lin,i,j,encontrou=0;
    printf("Digite a quantidade de valores: ");
    scanf("%d",&quantidade);
    lin=quantidade/2;
    mat=(int**)malloc(lin*sizeof(int*));
    for(i=0;i<lin;i++){
        mat[i]=(int*)malloc(2*sizeof(int));
    }
    // Leitura
    for(i=0;i<lin;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    // Pesquisa dos maiores que 30
    printf("\nNumeros maiores que 30:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<2;j++){
            if(mat[i][j]>30){
                printf("Valor: %d - Posicao: [%d][%d]\n",mat[i][j],i,j);
                encontrou=1;
            }
        }
    }
    if(encontrou==0){
        printf("Nao existe nenhum numero maior que 30.\n");
    }
    // Liberacao
    for(i=0;i<lin;i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}