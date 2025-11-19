#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que utilize alocação dinâmica para criar um vetor de 100 números de
série de modelos de veículos cujos números são múltiplos de 4, mas que não terminam com o
dígito 4. Certifique-se de que o vetor tenha exatamente 100 modelos e, ao final, libere a memória
alocada.*/

int main() {
    const int N = 100;
    int *models = malloc(N * sizeof(int));
    if (!models) {
        fprintf(stderr, "Erro: falha ao alocar memória.\n");
        return EXIT_FAILURE;
    }

    int count = 0;
    for (int x = 4; count < N; x += 4) {
        if (x % 10 == 4) continue; // ignora múltiplos de 4 que terminam com dígito 4
        models[count++] = x;
    }

    printf("Modelos (%d):\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d%s", models[i], (i % 10 == 9) ? "\n" : " ");
    }
    printf("\n");

    free(models);
    return 0;
}