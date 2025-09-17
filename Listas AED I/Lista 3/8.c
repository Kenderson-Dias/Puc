#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que verifique se um número é palíndromo.
Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454 ou 10501*/

int main(){
    int n, original, invertido = 0, resto;
    printf("Digite um numero: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        resto = n % 10;
        invertido = invertido * 10 + resto;
        n = n / 10;
    }

    if (original == invertido) {
        printf("O numero e palindromo.\n");
    } else {
        printf("O numero nao e palindromo.\n");
    }

    return 0;
}