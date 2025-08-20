#include <stdio.h>
#include <stdlib.h>

/*Implemente um algoritmo que solicita o valor de 3 notas (n1, n2 e n3) e depois mostra: a soma,
a média e o produto das notas*/

int main() {
    int n1, n2, n3;
    int soma, produto;
    float media;

    printf("\nInsira a primeira nota: ");
    scanf("%d", &n1);
    printf("\nInsira a segunda nota: ");
    scanf("%d", &n2);
    printf("\nInsira a terceira nota: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;
    media = soma / 3;
    produto = n1 * n2 * n3;

    printf("\n A soma é: %d", soma);
    printf("\n A media é: %.2f", media);
    printf("\n O produto é: %d", produto);

    return 0;
}