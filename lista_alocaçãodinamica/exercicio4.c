//4) Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os 6
//números do seu bilhete. O programa então compara quantos números o jogador acertou. Em
//seguida, ele aloca espaço para um vetor de tamanho igual à quantidade de números corretos e
//guarda os números corretos nesse vetor. Finalmente, o programa exibe os números sorteados e os
//seus números corretos.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int sorteados[6],bilhete[6],*acertos,i,j,quantidade=0,k=0;
    printf("Digite os 6 numeros sorteados:\n");
    for(i=0;i<6;i++){
        scanf("%d",&sorteados[i]);
    }
    printf("\nDigite os 6 numeros do seu bilhete:\n");
    for(i=0;i<6;i++){
        scanf("%d",&bilhete[i]);
    }
    // Conta quantos numeros foram acertados
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(bilhete[i]==sorteados[j]){
                quantidade++;
                break;
            }
        }
    }
    // Aloca o vetor de acertos
    acertos=(int *)malloc(quantidade*sizeof(int));
    // Guarda os numeros acertados
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(bilhete[i]==sorteados[j]){
                acertos[k]=bilhete[i];
                k++;
                break;
            }
        }
    }
    printf("\nNumeros sorteados:\n");
    for(i=0;i<6;i++){
        printf("%d ",sorteados[i]);
    }
    printf("\n\nNumeros acertados:\n");
    if(quantidade==0){
        printf("Nenhum numero acertado.\n");
    }else{
        for(i=0;i<quantidade;i++){
            printf("%d ",acertos[i]);
        }
    }
    printf("\nQuantidade de acertos: %d\n",quantidade);
    free(acertos);
    return 0;
}