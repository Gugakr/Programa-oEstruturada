#include<stdio.h>
struct data{
    int dia,ano;
    char mes[20];
};
#define DATAS 3
int main(){
    struct data itens[DATAS];
    int i;
    for(i=0;i<3;i++){
        printf("\nDigite a data: \n");
        scanf("%d%s%d",&itens[i].dia,&itens[i].mes,&itens[i].ano);
    }
    for(i=0;i<3;i++){
        printf("\n %d %s %d\n",itens[i].dia,itens[i].mes,itens[i].ano);
    }
    return 0;
}
