#include<stdio.h>
#include<math.h>
int main(){
    float num1,num2,resul;
    printf("Digite dois numeros: ");
    scanf("%f%f",&num1,&num2);
    resul=pow(num1,num2);
    printf("Esse e o resultado: %f",resul);
    return 0;
}