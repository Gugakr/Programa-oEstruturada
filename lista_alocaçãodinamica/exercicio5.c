//5) Construa um programa que leia o numero de linhas e de colunas de uma matriz de números
//reais, aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo usuário.
//Ao final, o programa deverá imprimir a matriz na tela com layout apropriado.
#include <stdio.h>
#include <stdlib.h>
int main(){
    float **mat;
    int lin,col,i,j;
    printf("Digite o numero de linhas: ");
    scanf("%d",&lin);
    printf("Digite o numero de colunas: ");
    scanf("%d",&col);
    mat=(float**)malloc(lin*sizeof(float *));
    for(i=0;i<lin;i++){
        mat[i]=(float*)malloc(col*sizeof(float));
    }
    // Leitura
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Digite o valor [%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }
    // Exibicao
    printf("\nMatriz:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%.2f\t",mat[i][j]);
        }
        printf("\n");
    }
    // Liberacao
    for(i=0;i<lin;i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}