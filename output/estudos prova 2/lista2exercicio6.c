#include<stdio.h>
#include<math.h>
int main(){
    float n1,n2, div;
    printf("Digite o primeiro numero:\n ");
    scanf("%f",&n1);
    printf("Digite o segundo numero:\n ");
    scanf("%f",&n2);
    if(n1<=0 || n2<=0){
        printf("Digite dois numeros maiores que zero!! ");
    }else{
        div=n1/n2;
        printf("A divisao entre os numeros e %.1f ",div);
    }
    return 0;
}