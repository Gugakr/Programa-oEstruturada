#include<stdio.h>
#include<math.h>
int main(){
    float pi=3.14,raio,result;
    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);
    result=pi*(raio*raio);
    printf("Essa e a area do circulo: %.2f",result);
    return 0;
}