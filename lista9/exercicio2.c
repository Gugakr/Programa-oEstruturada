#include<stdio.h>
void levetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("%d",vetor[i]);
    }
    printf("\n");
}
int main(){
    int vetor1[4],vetor2[6],vetor3[8],vetor4[10],i;
    printf("Digite os 4 numeros do primeiro vetor:\n ");
    for(i=0;i<4;i++){
        scanf("%d",&vetor1[i]);
    }
    printf("Digite os 6 numeros do segundo vetor:\n ");
    for(i=0;i<6;i++){
        scanf("%d",&vetor2[i]);
    }
    printf("Digite os 8 numeros do terceiro vetor:\n ");
    for(i=0;i<8;i++){
        scanf("%d",&vetor3[i]);
    }
    printf("Digite os 10 numeros do quarto vetor:\n ");
    for(i=0;i<10;i++){
        scanf("%d",&vetor4[i]);
    }
    printf("Primeiro vetor: ");
    levetor(vetor1,4);
    printf("Segundo vetor: ");
    levetor(vetor2,6);
    printf("Terceiro vetor: ");
    levetor(vetor3,8);
    printf("Quarto vetor: ");
    levetor(vetor4,10);
    return 0;
}