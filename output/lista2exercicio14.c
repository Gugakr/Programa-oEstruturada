#include <stdio.h>
#include <math.h>
int main(){
    float dista,tempo,velo;
    printf("Digite a distancia percorrida: ");
    scanf("%f",&dista);
    printf("Digite o tempo que voce terminou o percurso: ");
    scanf("%f",&tempo);
    velo=dista/tempo;
    if(velo>90){
    
        printf("passou do excesso de velocidade");
    }
    else{
        printf("nao passou do excesso de velocidade");
    }
    
}