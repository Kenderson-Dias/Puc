#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[10], v2[5], v3[5];
    int odds[10];
    int n = 0;             // quantidade de ímpares em v1
    int soma = 0;
    int i, j;

    /* leitura de v1 (10 inteiros) */
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &v1[i]) != 1) return 1;
        if (v1[i] % 2 == 0) {
            soma += v1[i];
        } else {
            odds[n++] = v1[i];
        }
    }

    /* leitura de v2 (5 inteiros) */
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &v2[i]) != 1) return 1;
    }

    /* resultado 1: soma de pares de v1 + correspondente v2 */
    for (i = 0; i < 5; i++) {
        v3[i] = soma + v2[i];
    }

    /* resultado 2: para cada ímpar de v1, contar quantos elementos de v2 o dividem */
    int *v4 = malloc(n * sizeof(int));
    if (n > 0 && v4 == NULL) return 1;
    for (i = 0; i < n; i++) {
        int contador = 0;
        for (j = 0; j < 5; j++) {
            if (v2[j] != 0 && odds[i] % v2[j] == 0) contador++;
        }
        v4[i] = contador;
    }

    /* impressão dos resultados */
    printf("Resultado 1: ");
    for (i = 0; i < 5; i++) {
        if (i) printf(" ");
        printf("%d", v3[i]);
    }
    printf("\n");

    printf("Resultado 2: ");
    for (i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", v4[i]);
    }
    printf("\n");

    free(v4);
    return 0;
}