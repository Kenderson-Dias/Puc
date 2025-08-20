#include <stdio.h>
#include <stdlib.h>

/*Implemente um programa que leia dois números reais e armazene-os em duas variáveis (ex.:
A e B). Em seguida, troque dos valores das variáveis de forma que a primeira variável passe a ter
o valor da segunda, e vice-versa. Ao final, imprima os valores finais das variáveis.*/

int main() {
    float a, b, c;
    printf("\nInsira o valor de A: ");
    scanf("%f", &a);
    printf("\nInsira o valor de B: ");
    scanf("%f", &b);

    c = a + b;
    a = c - a;
    b = c - b;

    printf("O novo valor de A e: %.2f", a);
    printf("O novo valor de B e: %.2f", b);

    return 0;
}