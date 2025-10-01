#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um procedimento chamado teste que recebe um valor n passado “por valor” e dois
inteiros b e k passados “por referência". Seu procedimento deve armazenar em b e k valores tais
que bk = n e b seja o menor valor possível.*/

void teste(int n, int *b, int *k) {
    *b = 2;
    while (*b <= n) {
        int exp = 1;
        int pot = *b;
        while (pot < n) {
            pot *= *b;
            exp++;
        }
        if (pot == n) {
            *k = exp;
            return;
        }
        (*b)++;
    }
    // Se não encontrar, retorna n = b^1
    *b = n;
    *k = 1;
}

int main() {
    int n, b, k;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    teste(n, &b, &k);

    printf("Menor b: %d, k: %d (b^k = %d)\n", b, k, n);

    return 0;
}