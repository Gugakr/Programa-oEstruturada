#include <stdio.h>

void divisao(int dividendo, int divisor, int *quociente, int *resto){
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
}
int main(){
    int dividendo,divisor,quociente,resto;
    printf("Digite o dividendo: ");
    scanf("%d",&dividendo);
    printf("Digite o divisor: ");
    scanf("%d",&divisor);
    divisao(dividendo,divisor,&quociente,&resto);
    printf("Quociente: %d\n",quociente);
    printf("Resto: %d\n",resto);
    return 0;
}
