#include<stdio.h>
int main(){
    float x,*px=&x,div;
    printf("Digite um numero: ");
    scanf("%f",&x);
    div=x/2;
    printf("%.2f",*px);
    return 0;
}