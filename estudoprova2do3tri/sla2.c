#include<stdio.h>
#include<stdlib.h>
int main(){
    int **mat,lin,col,i,j;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&lin);
    printf("\nDigite a quatidade de colunas da matriz: ");
    scanf("%d",&col);
    mat=(int**)malloc(lin*sizeof(int *));
    for(i=0;i<lin;i++){
        mat[i]=(int*)malloc(col*sizeof(int));
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Digite o valor [%d][%d] da matriz: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<lin;i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}