#include<stdio.h>
#include<math.h>
int main(){
    float num,numq,numc,rqnum,rcnum;
    printf("Digite um numero maior que zero: ");
    scanf("%f",&num);
    while (num<=0){
        printf("Valor invalido! Digite o numero novamente: ");
        scanf("%f",&num);
    }
    numq=num*num;
    numc=num*num*num;
    rqnum=sqrt(num);
    rcnum=cbrt(num);
    printf("Numero ao quadrado: %.2f\n",numq);
    printf("Numero ao cubo: %.2f\n",numc);
    printf("Raiz quadrada do numero: %.2f\n",rqnum);
    printf("Raiz cubica do numero: %.2f\n",rcnum);
    return 0;
}