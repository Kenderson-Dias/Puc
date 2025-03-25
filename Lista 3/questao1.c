#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Implementar um algoritmo que recebe um número inteiro N fornecido pelo usuário e mostre a soma
dos números ímpares de 0 até N (incluindo N, se N for ímpar).*/

int main() {
    int cont = 0, n, soma = 0;
    printf ("Digite um numero: ");
    scanf ("%d", &n);

    while (cont <= n) {
        if (cont % 2 == 1)
        {
            soma += cont;
        }
        cont++;
    }

    printf ("A soma dos impares e: %d", soma);

    return 0;
}