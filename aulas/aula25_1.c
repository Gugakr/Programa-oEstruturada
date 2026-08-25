#include <stdio.h>

void ler(int vet[],int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("insira um numero:\n");
        scanf("%i",&vet[i]);
    }
}
void imprime(int vet[],int tam){
    int i;
    printf("\nmostrandoooo\n");
    for(i=0;i<tam;i++){
        printf("%i\n",vet[i]);
    }
}
int main (){
    int vet[4];
    ler(vet,4);
    imprime(vet,4);
}