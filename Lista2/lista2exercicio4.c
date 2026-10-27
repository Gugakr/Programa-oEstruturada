#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("e par");
    }
    else{
        printf("e impar");
    }
    return 0;
}