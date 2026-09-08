#include<stdio.h>
void ler(float *px, float *py){
    printf("Digite dois valores:\n ");
    scanf("%i%i",px,py);
}
void SomeM(float *psoma, float  *pmedia, float *px, float *py){
    *psoma=*px+*py;
    *pmedia=*psoma/2;
}
int main(){
    float num1,num2,soma,med;
    ler(&num1,&num2);
    SomeM(&soma,&med,&num1,&num2);
    return 0;
}