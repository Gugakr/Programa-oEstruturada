#include<stdio.h>
#include<math.h>
int main(){
    float kg,gramas;
    printf("Digite seu peso em kg: ");
    scanf("%f",&kg);
    gramas = kg*1000;
    printf("Este e seu peso em gramas: %.2f",gramas);
    return 0;
}