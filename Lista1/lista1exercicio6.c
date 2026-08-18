#include<stdio.h>
#include<math.h>
int main(){
    float cateto1,cateto2,hipotenusa,c1,c2;
    printf("Digite os catetos: ");
    scanf("%f%f",&cateto1,&cateto2);
    c1=cateto1*cateto1;
    c2=cateto2*cateto2;
    hipotenusa=(c1+c2);
    printf("A hipotenusa vale: %.2f",hipotenusa);
    return 0;
}