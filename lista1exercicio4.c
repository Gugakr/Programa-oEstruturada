#include<stdio.h>
int main(){
    float sal,bonus,imposto,nsal;
    printf("Digite o seu salario: ");
    scanf("%f",&sal);
    bonus=(sal/100)*5;
    nsal=sal+bonus;
    imposto=(nsal/100)*7;
    printf("este e quanto de imposto que voce tem que pagar: %.2f",imposto);
    return 0;
}