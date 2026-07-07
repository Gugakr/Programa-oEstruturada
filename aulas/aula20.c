#include<stdio.h>
#include<string.h>
struct data{
    int dia,ano;
    char mes[20];
};
int main(){
    struct data item1,item2;
    printf("\nDigite a data (dia/mes/ano): \n");
    scanf("%d%s%d",&item1.dia,&item1.mes,&item1.ano);
    printf("\nDigite a data (dia/mes/ano): \n");
    scanf("%d%s%d",&item2.dia,&item2.mes,&item2.ano);
    //item1==item2;
    if(item1.dia==item2.dia){
        if(!strcmp(item1.mes,item2.mes)){
            if(item1.ano==item2.ano){
                printf("As data eh engualais");
            }
            else{
                printf("As datas sao diferentes");
            }
        }
        else{
            printf("As datas sao diferentes");
        }
    }
    else{
        printf("As datas sao diferentes");
    }
    printf("\n%d %s %d \n",item1.dia,item1.mes,item1.ano);
    printf("\n%d %s %d \n",item2.dia,item2.mes,item2.ano);
    return 0;
}
