#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    float n;
    printf("Digite um numero: ");
    scanf("%f",&n);
    if(n>0){
        printf(" e positivo");
    }
    else if(n==0){
        printf("e nulo\n");
    }
    else{
        printf("e negativo");
    }

}