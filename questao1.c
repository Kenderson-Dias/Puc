#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main() 

{
    int numero, sucessor;

    // Solicita ao usuário que digite um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Calcula o sucessor do número digitado
    sucessor = numero + 1;

    // Exibe o sucessor
    printf("O sucessor de %d é %d.\n", numero, sucessor);

    return 0;
}