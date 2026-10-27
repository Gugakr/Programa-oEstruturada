#include<stdio.h>
void fatorial(int *n){
    int i, fat=1;
    for(i=1;i<=*n;i++){
        fat *= i;
    }
    *n = fat;
}
void calcular(int A[], int B[]){
    int i;
    for(i=0;i<10;i++){
        B[i]=A[i];
        fatorial(&B[i]);
    }
}
int main(){
    int A[10],B[10],i;
    for(i=0;i<10;i++){
        printf("Digite o valor %d do vetor A: ",i+1);
        scanf("%d",&A[i]);
    }
    calcular(A,B);
    printf("\nVetor A:\n");
    for(i=0;i<10;i++){
        printf("\n%d",A[i]);
    }
    printf("\n\nVetor B (fatoriais):\n");
    for(i=0;i<10;i++){
        printf("\n%d",B[i]);
    }
    printf("\n");
    return 0;
}