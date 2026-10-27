
#include <stdio.h>
int incluir(long telefones[], int qtd) {
    if (qtd >= 1000){
        printf("Central cheia!\n");
        return qtd;
    }
    printf("Digite o telefone: ");
    scanf("%ld", &telefones[qtd]);
    return qtd + 1;
}
void alterar(long telefones[], int qtd) {
    int pos;
    if(qtd == 0){
        printf("Nenhum telefone cadastrado!\n");
        return;
    }
    printf("Digite a posicao do telefone: ");
    scanf("%d", &pos);
    if (pos>=1 && pos<=qtd){
        printf("Digite o novo telefone: ");
        scanf("%ld", &telefones[pos - 1]);
        printf("Telefone alterado!\n");
    } else {
        printf("Posicao invalida!\n");
    }
}

int excluir(long telefones[], int qtd) {
    int pos, i;

    if (qtd == 0) {
        printf("Nenhum telefone cadastrado!\n");
        return qtd;
    }

    printf("Digite a posicao do telefone: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > qtd) {
        printf("Posicao invalida!\n");
        return qtd;
    }

    for (i = pos - 1; i < qtd - 1; i++) {
        telefones[i] = telefones[i + 1];
    }

    return qtd - 1;
}

void imprimir(long telefones[], int qtd) {
    int i;

    if (qtd == 0) {
        printf("Nenhum telefone cadastrado!\n");
    }

    for (i = 0; i < qtd; i++) {
        printf("%d - %ld\n", i + 1, telefones[i]);
    }
}

int main() {
    long telefones[1000];
    int qtd = 0;
    int opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Inclusao de telefone\n");
        printf("2 - Alteracao de telefone\n");
        printf("3 - Exclusao de telefone\n");
        printf("4 - Impressao dos telefones\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                qtd = incluir(telefones, qtd);
                break;

            case 2:
                alterar(telefones, qtd);
                break;

            case 3:
                qtd = excluir(telefones, qtd);
                break;

            case 4:
                imprimir(telefones, qtd);
                break;

            case 5:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}