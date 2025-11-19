#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa que instancie um vetor de inteiros A utilizando malloc. O programa
deve ler um valor k, onde k é positivo e menor que o tamanho do vetor (rejeite entradas
inválidas). Implemente um procedimento que receba como parâmetros o vetor A, o tamanho do
vetor |A| e o valor k. Retorne o k-ésimo menor elemento do vetor.*/

int k_esimo_menor(int *A, int n, int k) {
    int *B = malloc(n * sizeof(int));
    if (!B) {
        fprintf(stderr, "Erro: falha ao alocar memoria.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < n; i++) B[i] = A[i];

    int cmp(const void *x, const void *y) {
        int a = *(const int*)x;
        int b = *(const int*)y;
        return (a > b) - (a < b);
    }

    qsort(B, n, sizeof(int), cmp);
    int resultado = B[k - 1]; // k é 1-based
    free(B);
    return resultado;
}

int main() {
    int n;
    printf("Tamanho do vetor (positivo): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        while (getchar() != '\n'); // limpa entrada
        printf("Entrada invalida. Digite um tamanho positivo: ");
    }

    int *A = malloc(n * sizeof(int));
    if (!A) {
        fprintf(stderr, "Erro: falha ao alocar memoria para o vetor.\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        while (scanf("%d", &A[i]) != 1) {
            while (getchar() != '\n');
            printf("Entrada invalida. A[%d]: ", i);
        }
    }

    int k;
    printf("Valor de k (positivo e menor que %d): ", n);
    while (scanf("%d", &k) != 1 || k <= 0 || k >= n) {
        while (getchar() != '\n');
        printf("Entrada invalida. Digite k (1 <= k < %d): ", n);
    }

    int resultado = k_esimo_menor(A, n, k);
    printf("O %d-essimo menor elemento eh: %d\n", k, resultado);

    free(A);
    return 0;
}