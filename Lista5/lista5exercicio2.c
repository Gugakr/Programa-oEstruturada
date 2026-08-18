#include<stdio.h>
int main(){
    float num;
    int i;
    for(i=1;i<=15;i++){
        printf("Digite o %dº numero: ",i);
        scanf("%f",&num);
        printf("Quadrado: %.2f\n",num*num);
    }
    return 0;
}