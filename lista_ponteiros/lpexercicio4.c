#include<stdio.h>
void troca(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x,y;
    printf("Digite o primeiro valor: ");
    scanf("%i",&x);
    printf("Digite o segundo valor: ");
    scanf("%i",&y);
    troca(&x,&y);
    printf("Valores apos a troca:\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    return 0;
}