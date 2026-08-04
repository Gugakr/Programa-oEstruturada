#include<stdio.h>
   float soma(float x,float y){
    float res;
    res = x+y;
    return 0;
    //return x+y;
 }
 void imprime(float soma1){
    printf("\nResultado: %.1f",soma1);
 }
 void multi(float x, float y){
    float res;
    res = x*y;
    imprime(res);
 }
 int menu(){
    int op;
    printf("Escolha uma das opções:\n1 - Soma\n2 - Multiplicação\n");
    scanf("%i",&op);
    return op;
 }
 int menu();
int main(){
    float x,y,res;
    int op;
    print("Digite dois valores: ");
    scanf("%f%f",&x,&y);
    op = menu();
    switch(op){
        case 1: 
            res = soma(x,y);
            imprime(res);
            break;
        case 2:
            multi(x,y);
            break;
        default:
            printf("\nOpção invalida!");
    }
    res = soma(x,y);
    imprime(res);
    multi(x,y);
    return 0;
}