
#include <stdio.h>
float somarMatriz(float matriz[4][3]){
    float soma=0;
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
void imprimirMatriz(float matriz[4][3]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%.2f ",matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    float matriz[4][3],soma;
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor: ");
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("\nMatriz digitada:\n");
    imprimirMatriz(matriz);
    soma=somarMatriz(matriz);
    printf("\nSoma dos elementos: %.2f\n",soma);
    return 0;
}