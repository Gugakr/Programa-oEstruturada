#include<stdio.h>
int main(){
    int num,nuns,maior,menor,i;
    printf("Quantos numeros voce quer digitar?" );
    scanf("%d",&num);
    printf("Digite o primeiro numero: ");
    scanf(" %d",&nuns);
    maior=nuns;
    menor=nuns;
    for(i=2;i<=num;i++){
        printf("Digite o %dº numero: ",i);
        scanf(" %d",&nuns);
        if(nuns>maior){
            maior=nuns;
        }
        if(nuns<menor){
            menor=nuns;
        }
    }
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
    return 0;
}