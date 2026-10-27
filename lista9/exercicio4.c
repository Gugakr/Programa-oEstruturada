
#include <stdio.h>
int lerVetor(int vetor[]) {
    int i=0,parar;
    while(i<100){
        printf("Digite um numero (-1 para parar): ");
        scanf("%d",&parar);
        if(parar==-1){
            break;
        }
        vetor[i]=parar;
        i++;
    }
    return i;
}
void exibirVetor(int vetor[], int tamanho) {
    for(int i=0;i<tamanho;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}
int main(){
    int vetor[100],quantidade;
    quantidade=lerVetor(vetor);
    printf("Vetor digitado:\n");
    exibirVetor(vetor,quantidade);
    return 0;
}