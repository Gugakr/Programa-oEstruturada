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
int soma(int vet[],int tam){
    int i;
    int soma=0;
    for(i=0;i<tam;i++){
        soma+=vet[i];
    }
    return soma;
}
int main (){
    int vet[4];
    ler(vet,4);
    imprime(vet,4);
    printf("a soma de todos os numeros no vetor é: %i",soma(vet,4));
}