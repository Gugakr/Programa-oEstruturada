#include <stdio.h>

void ler(int mat[][2],int qnt_l){
    int i,j;
    for(i=0;i<qnt_l;i++){
        for(j=0;j<2;j++){
            printf("insira um numero:\n");
            scanf("%i",&mat[i][j]);
        }
    }
}
void imprime (int mat[][2],int qnt_l){
    int i,j;
    for(i=0;i<qnt_l;i++){
        for(j=0;j<2;j++){
            printf("%i\t",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[3][2];
    ler(mat,3);
    imprime(mat,3);
    return 0;
}