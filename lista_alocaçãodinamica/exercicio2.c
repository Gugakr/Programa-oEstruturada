//2) Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
//dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *vet,tam,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    vet=(int*)malloc(tam*sizeof(int));
    for (i=0;i<tam;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("\nVetor:\n");
    for(i=0;i<tam;i++){
        printf("%d ", vet[i]);
    }
    free(vet);
    return 0;
}