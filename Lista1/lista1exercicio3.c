#include<stdio.h>
int main(){
    float sal,nsal,perau,aumento;
    printf("Digite o seu salario: ");
    scanf("%f",&sal);
    printf("DIgite o percentual de aumento: ");
    scanf("%f",&perau);
    aumento=(sal/100)*perau;
    nsal=sal+aumento;
    printf("Este e o seu novo salario: %f",nsal);
    return 0;
}