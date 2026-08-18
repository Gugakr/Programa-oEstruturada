//nao ta funcionando//
#include <stdio.h>
#include <math.h>
int main(){
    float md,mdfinal;
    char c;
    printf("insira o conceito que o aluno se enquadra:\n");
    c=getchar();
    printf("insira a media do aluno:\n");
    scanf("%f",&md);
    fflush(stdin);
    switch (c)
    {
    case 'a':
    case 'A':
        mdfinal=md+1;
        break;
        case 'b':
        case 'B':
        mdfinal=md+0.5;
        break;
        case 'c':
        case 'C':
        mdfinal=md;
        break;
        case 'd':
        case 'D':
        mdfinal=md-0.5;
        break;
        default:
        printf("insira um conceito valido para o aluno!");

    }
    if (mdfinal>=7)
    {
        printf("O aluno esta aprovado com media %.1f",mdfinal);
    }
    else{
        printf("O aluno esta reprovado com media %.1f",mdfinal);
    }
    return 0;
    
}