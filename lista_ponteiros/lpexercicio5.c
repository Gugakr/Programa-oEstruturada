#include<stdio.h>
int menu(){
    int opcao;
    printf("\n--- MENU ---\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar todos\n");
    printf("3 - Pesquisar\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d",&opcao);
    return opcao;
}
void cadastrar(int vetor[]){
    int i;
    for(i=0;i<10;i++){
        printf("Digite o numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
}
void listartodos(int vetor[]){
    int i;
    for(i=0;i<10;i++){
        printf("%d",vetor[i]);
    }
    printf("\n");
}
void pesquisar(int vetor[], int *numero){
    int i,encontrou=0;
    for(i=0;i<10;i++){
        if(vetor[i]==*numero){
            printf("Numero encontrado na posicao %d\n",i+1);
            encontrou=1;
        }
    }
    if(encontrou==0){
        printf("Numero nao encontrado.\n");
    }
}
int main(){
    int vetor[10],opcao,numero,cadastrado=0;
    do{
        opcao=menu();
        switch(opcao){
            case 1:
            cadastrar(vetor);
            cadastrado=1;
            break;
            case 2:
            if(cadastrado==1){
                listartodos(vetor);
            }else{
                printf("Cadastre os numeros primeiro!\n");
            }
            break;
            case 3:
            if(cadastrado==1){
                printf("Digite o numero que deseja pesquisar: ");
                scanf("%d",&numero);
                pesquisar(vetor,&numero);
            }else{
                printf("Cadastre os numeros primeiro!\n");
            }
            break;
            case 4:
            printf("Programa encerrado!\n");
            break;
            default:
            printf("Opcao invalida!\n");
        }
    }while(opcao!=4);
    return 0;
}