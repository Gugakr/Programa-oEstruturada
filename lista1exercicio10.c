#include<stdio.h>
int main(){
    int anoatual,anonas,anos,anostera;
    printf("Digite o ano que voce nasceu: ");
    scanf("%i",&anonas);
    printf("Digite o ano que voce esta: ");
    scanf("%i",&anoatual);
    anos=anoatual-anonas;
    anostera=2050-anonas;
    printf("Essa e a sua idade: %i\n",anos);
    printf("Essa sera a sua idade em 2050: %i",anostera);
    return 0;
}