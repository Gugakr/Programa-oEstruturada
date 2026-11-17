#include<stdio.h>
#include<stdlib.h>
void maiorMenor(int *vet,int tam,int *maior,int *menor){
    int i;
    for(i=0;i<tam;i++){
        if(vet[i]> *maior){
            *maior=vet[i];
        }
        if(vet[i]< *menor){
            *menor=vet[i];
        }
    }
}
int main(){
    int *vet,tam,maior,menor,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    vet=(int*)malloc(tam*sizeof(int));
    for(i=0;i<tam;i++){
        printf("Digite o numero %d do vetor: ",i+1);
        scanf("%d",&vet[i]);
    }
    maior=vet[0];
    menor=vet[0];
    maiorMenor(vet,tam,&maior,&menor);
    printf("O maior valor e: %d ",maior);
    printf("\nO menor valor e: %d ",menor);
    free(vet);
    return 0;
}