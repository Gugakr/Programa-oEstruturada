//7) Faça um programa que leia dois números N e M e:
// Crie e leia uma matriz de inteiros N x M;
// Localize os três maiores números de uma matriz e mostre a linha e a coluna onde estão.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int **mat,lin,col,i,j,maior1,maior2,maior3,l1,c1,l2,c2,l3,c3;
    printf("Digite o numero de linhas: ");
    scanf("%d",&lin);
    printf("Digite o numero de colunas: ");
    scanf("%d",&col);
    mat=(int**)malloc(lin*sizeof(int *));
    for(i=0;i<lin;i++){
        mat[i]=(int*)malloc(col*sizeof(int));
    }
    // Leitura
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Digite o valor [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    // Inicializacao
    maior1=maior2=maior3=0;
    // Procura os tres maiores
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            if (mat[i][j]>maior1){
                maior3=maior2;
                l3=l2;
                c3=c2;
                maior2=maior1;
                l2=l1;
                c2=c1;
                maior1=mat[i][j];
                l1=i;
                c1=j;
            }else if(mat[i][j]>maior2){
                maior3=maior2;
                l3=l2;
                c3=c2;
                maior2=mat[i][j];
                l2=i;
                c2=j;
            } else if(mat[i][j]>maior3){
                maior3=mat[i][j];
                l3=i;
                c3=j;
            }
        }
    }
    printf("\nTres maiores numeros:\n");
    printf("1º maior: %d - Posicao [%d][%d]\n",maior1,l1,c1);
    printf("2º maior: %d - Posicao [%d][%d]\n",maior2,l2,c2);
    printf("3º maior: %d - Posicao [%d][%d]\n",maior3,l3,c3);
    // Liberacao
    for(i=0;i<lin;i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}