#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int km;
} Veiculo;

int main() {
    const int N = 20;
    Veiculo vet[N];

    printf("Preencha os dados de %d veiculos:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Veiculo %d\n", i);
        printf("  ID: ");
        while (scanf("%d", &vet[i].id) != 1) {
            while (getchar() != '\n');
            printf("  Entrada invalida. ID: ");
        }
        printf("  Quilometragem: ");
        while (scanf("%d", &vet[i].km) != 1 || vet[i].km < 0) {
            while (getchar() != '\n');
            printf("  Entrada invalida. Quilometragem (>=0): ");
        }
    }

    int busca;
    printf("\nDigite o numero de identificacao a pesquisar: ");
    while (scanf("%d", &busca) != 1) {
        while (getchar() != '\n');
        printf("Entrada invalida. ID a pesquisar: ");
    }

    int encontrado = 0;
    printf("Posicoes com ID %d:\n", busca);
    for (int i = 0; i < N; i++) {
        if (vet[i].id == busca) {
            printf("  indice %d (km: %d)\n", i, vet[i].km);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("  Nao foi encontrada nenhuma ocorrencia desse ID.\n");
    }

    return 0;
}