#include<stdio.h>
#include<math.h>
int main(){
    float n1,raiz,qua;
    printf("Digite um numero:\n ");
    scanf("%f",&n1);
    if (n1>=0)
    {
        raiz=sqrt(n1);
        printf("Esse e a raiz do numero: %.2f",raiz);
    }else{
        qua=pow(n1,2);
        printf("Esse e o numero ao quadrado: %.1f",qua);
    }
    return 0;
    
}