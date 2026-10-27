#include<stdio.h>
#include<stdlib.h>
void ler(int **mat,int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Digite o valor [%i][%i]: ",i,j);
            scanf("%i",&mat[i][j]);
        }
    }
}
void imprime(int **mat, int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%i\t",mat[i][j]);
        }
        printf("\n");
    }
}
int soma(int **mat, int lin, int col){
    int i,j,soma=0;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            soma+=mat[i][j];
        }
    }
    return soma;
}
void media(int **mat, int lin, int col, int *rmeida){
    int rsoma;
    rsoma=soma(mat,lin,col);
    *rmeida=rsoma/(lin*col);
}
int main(){
    int **mat,lin,col,l,c,rmedia;
    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%i%i",&lin,&col);
    //alocaçãp das linha
    mat=(int**)malloc(lin*sizeof(int*));
    if(mat==NULL)exit(1);
    for(l=0;l<lin;l++){
        mat[l]=(int*)malloc(col*sizeof(int));
        if(mat==NULL)exit(2);
        }
    ler(mat,lin,col);
    imprime(mat,lin,col);
    printf("\nSoma: %i",soma(mat,lin,col));
    media(mat,lin,col,&rmedia);
    printf("\nMedia: %.2f",(float)rmedia);
    for(l=0;l<lin;l++){
        free(mat[l]);
    }
    free(mat);
}