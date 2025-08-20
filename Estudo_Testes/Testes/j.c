#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *vetor;

    printf("Quantos números você quer armazenar? ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Você digitou:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
