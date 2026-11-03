#include <stdio.h>
#include <stdlib.h>
int pesquisar(int lin,int col,int valor){
    int **mat;
    int i,j,encontrado=0;
    mat=(int**)malloc(lin*sizeof(int*));
    for(i=0;i<lin;i++){
        mat[i]=(int*)malloc(col*sizeof(int));
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Digite o valor [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            if(mat[i][j]==valor){
                encontrado=1;
            }
        }
    }
    for(i=0;i<lin;i++){
        free(mat[i]);
    }
    free(mat);
    return encontrado;
}
int main() {
    int lin,col,valor,resultado;
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&lin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&col);
    printf("Digite o valor a pesquisar: ");
    scanf("%d",&valor);
    resultado=pesquisar(lin,col,valor);
    if(resultado==1){
        printf("Valor encontrado!\n");
    } else{
        printf("Valor nao encontrado!\n");
    }
    return 0;
}