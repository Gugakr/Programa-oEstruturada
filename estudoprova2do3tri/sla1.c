#include<stdio.h>
#include<stdlib.h>
int  main(){
    int *vet,tam,i,cont=0;
    printf("Digite o tamanho do vetor que vc quer: ");
    scanf("%d",&tam);
    vet=(int*)malloc(tam*sizeof(int));
    for(i=0;i<tam;i++){   
        printf("\nDigite os valores do vetor: ");
        scanf("%d",&vet[i]);
        if(vet[i]>10){
            cont++;
        }
     }
     printf("\nQuantidade de valores maiores que 10: %d ",cont);
     free(vet);
     return 0;
}