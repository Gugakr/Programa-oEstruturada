//1) Crie um programa que:
//a Aloque dinamicamente um vetor de 5 números inteiros;
//b Peça para o usuário digitar os 5 números no espaço alocado;
//c Mostre na tela os 5 números;
//d Libere a memoria alocada.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vet,i;
    vet=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("\nNumeros digitados:\n");
    for (i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
    free(vet);
    return 0;
}