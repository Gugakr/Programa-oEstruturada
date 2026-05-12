#include<stdio.h>
int main(){
    float num,maior=-1,menor=-1;
    do{
        printf("Digite um numero:\n ");
        scanf("%f",&num);
        if(num<0){
            if(maior==-1){
                maior=num;
                menor=num;
            }
            if(num>maior){
                maior=num;
            }
            else if(num<menor){
                menor=num;
            }
        }
    }while(num>=0);
    if(maior!=-1){
        printf("O maior numero e: %.1f",maior);
    }
    else{
        printf("Numero invalido!!");
    }
    if(menor!=-1){
        printf("\nO menor numero e: %.1f",menor);
    }
    return 0;

}