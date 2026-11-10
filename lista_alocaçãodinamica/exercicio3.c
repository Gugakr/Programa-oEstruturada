//3) Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
//dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos
//números são pares e quantos são ímpares.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vet,tam,i,pares=0,impares=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    vet=(int*)malloc(tam*sizeof(int));
    for(i=0;i<tam;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet[i]);
        if(vet[i]%2==0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("\nQuantidade de pares: %d\n",pares);
    printf("Quantidade de impares: %d\n",impares);
    free(vet);
    return 0;
}