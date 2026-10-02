#include<stdio.h>
void levetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("%d",vetor[i]);
    }
}
void univetor(int vetor1[],int vetor2[], int resul[]){
    int i;
    for(i=0;i<5;i++){
        resul[i]=vetor1[i];
    }
    for(i=0;i<10;i++){
        resul[i+5]=vetor2[i];
    }
}
void mostravetor(int vetor[],int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        printf("%d",vetor[i]);
    }
    printf("\n");
}
int main(){
    int vetor1[5],vetor2[10],resul[15];
    printf("Digite os 5 numeros do primeiro vetor:\n ");
    levetor(vetor1,5);
    printf("Digite os 10 numeros do segundo vetor:\n ");
    levetor(vetor2,10);
    univetor(vetor1,vetor2,resul);
    printf("Vetor resultante:\n");
    mostravetor(resul,15);
    return 0;
}
