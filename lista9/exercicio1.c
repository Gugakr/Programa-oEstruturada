#include <stdio.h>
int menor(int vetor[], int tamanho) {
    int m = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < m) {
            m = vetor[i];
        }
    }
    return m;
}
int maior(int vetor[], int tamanho) {
    int m = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > m) {
            m = vetor[i];
        }
    }
    return m;
}
int main() {
    int vetor[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Menor: %d\n", menor(vetor, 5));
    printf("Maior: %d\n", maior(vetor, 5));
    return 0;
}