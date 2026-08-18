#include<stdio.h>
int main(){
    int i,num,j;
    for(i=0;i<10;i++){
        printf("Digite um numero de 1 a 20: ");
        scanf("%d",&num);
        if(num>=1 && num<=20){
            for(j=0;j<=num;j++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("Digite um numero valido!!");
        }
    }
    return 0;
}