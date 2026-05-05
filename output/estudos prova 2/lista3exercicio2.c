#include<stdio.h>
int main(){
    float media,mdf;
    char conceito;
    printf("Digite a sua media:\n ");
    scanf("%f",&media);
    printf("Digite o seu conceito:\n ");
    scanf(" %c",&conceito);
    switch (conceito){
    case 'A':
        mdf=media+1;
        printf("Essa e a sua media final: %.1f",mdf);
        break;
        case 'B':
        mdf=media+0.5;
        printf("Essa e a sua media final: %.1f",mdf);
        break;
        case 'C':
        mdf=media;
        printf("Essa e a sua media final: %.1f",mdf);
        break;
        case 'D':
        mdf=media-0.5;
        printf("Essa e a sua media final: %.1f",mdf);
        break;
    }
    if (mdf>=7){
        printf("\nVoce passou parabens!!!!\n");
    }else{
        printf("\nVoce nao passou :(\n");
    }
    return 0;
    
}