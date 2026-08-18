#include <stdio.h>
#include <math.h>
int main(){
    int quant_banana,quant_uva,quant_pessego;
    float preco_banana,preco_uva,preco_pessego,total_bananas,total_pessegos,total_uvas,Total,sub_total;

    printf("insira o preço de cada fruta:\n");
    scanf("%f%f%f",&preco_banana,&preco_uva,&preco_pessego);
    printf("insira a quantidade de cada fruta:\n");
    scanf("%i%i%i",&quant_banana,&quant_uva,&quant_pessego);
    total_bananas = quant_banana*preco_banana;
    total_uvas = quant_uva*preco_uva;
    total_pessegos = quant_pessego*preco_pessego;
    sub_total = total_bananas+total_uvas+total_pessegos;
    Total=sub_total*1.05;
    printf("%-10s|%-20s|%-12s|%-15s","Produto", "Preço Unitário", "Quantidade", "Preço Total");
    printf("\n%-10s|%-5s%13.2f|%12i|%-5s%6.2f","banana","R$",preco_banana,quant_banana,"R$",total_bananas);
    printf("\n%-10s|%-5s%13.2f|%12i|%-5s%6.2f","uva","R$",preco_uva,quant_uva,"R$",total_uvas);
    printf("\n%-10s|%-5s%13.2f|%12i|%-5s%6.2f","pêssego","R$",preco_pessego,quant_pessego,"R$",total_pessegos);
    return 0;
}