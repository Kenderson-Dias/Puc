#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/*Escreva um progama que leia do teclado um valor n. Instancie, usando o comando malloc, uma
matriz de números em ponto flutuante Mn×n. Encontre (a) o maior elemento, (b) o menor
elemento, (c) a média dos elementos da matriz*/

int main() {
    int n;
    printf("Digite o valor de n (positivo): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Entrada invalida. Digite um valor inteiro positivo para n: ");
    }

    size_t total = (size_t)n * (size_t)n;
    float *M = malloc(total * sizeof(float));
    if (!M) {
        fprintf(stderr, "Erro: falha ao alocar memoria.\n");
        return EXIT_FAILURE;
    }

    printf("Digite os %d x %d = %zu elementos (float):\n", n, n, total);
    for (size_t idx = 0; idx < total; idx++) {
        printf("Elemento [%zu]: ", idx);
        while (scanf("%f", &M[idx]) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Entrada invalida. Digite um numero (float) para Elemento [%zu]: ", idx);
        }
    }

    double soma = 0.0;
    float menor = FLT_MAX;
    float maior = -FLT_MAX;

    for (size_t idx = 0; idx < total; idx++) {
        float v = M[idx];
        soma += v;
        if (v < menor) menor = v;
        if (v > maior) maior = v;
    }

    double media = soma / (double)total;

    printf("\nResultados:\n");
    printf("Maior elemento: %.6f\n", maior);
    printf("Menor elemento: %.6f\n", menor);
    printf("Media dos elementos: %.6f\n", media);

    free(M);
    return 0;
}