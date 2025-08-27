#include <stdlib.h>
#include <stdio.h>

/*Crie um algoritmo que solicita ao usuário um número inteiro e e mostre o seu módulo*/

int main() {
    int n, mod;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    n >= 0 ? mod = n: mod = -n;
    printf("%d", mod);

    return 0;
}