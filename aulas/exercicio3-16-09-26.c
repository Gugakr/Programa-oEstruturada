#include <stdio.h>
void maiorMenor(int vetor[], int tamanho, int *maior, int *menor){
    int i;
    *maior=vetor[0];
    *menor=vetor[0];
    for (i=1;i<tamanho;i++){
        if(vetor[i]>*maior){
            *maior=vetor[i];
        }
        if(vetor[i]<*menor){
            *menor=vetor[i];
        }
    }
}
int main(){
    int vetor[8],maior,menor,i;
    printf("Digite 8 valores:\n");
    for(i=0;i<8;i++){
        scanf("%d",&vetor[i]);
    }
    maiorMenor(vetor,8,&maior,&menor);
    printf("\nVetor: ");
    for(i=0;i<8;i++){
        printf("%d ",vetor[i]);
    }
    printf("\nMaior: %d\n",maior);
    printf("Menor: %d\n",menor);
    return 0;
}