#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    float n;
    printf("Digite um numero: ");
    scanf("%f",&n);
    if(n>0){
        printf(" e positivo\n");
        if (fmod(n,2)==0)
        {
            printf("e par");
        }
        else{
            printf("e impar");
        }
        
    }
    else if(n==0){
        printf("e nulo\n");
    }
    else{
        printf("e negativo");
    }

}