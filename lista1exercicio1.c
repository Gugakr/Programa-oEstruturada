#include<stdio.h>
#include<math.h>
int main(){
    float num1,num2,num3,media;
    printf("Digite as suas 3 notas: ");
    scanf("%f%f%f",&num1,&num2,&num3);
    media=(num1+num2+num3)/3;
    printf("Essa e sua media: %f",media);
    return 0;
}