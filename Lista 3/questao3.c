#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Implementar um algoritmo que recebe solicita ao usuário um número inteiro N e mostra a soma de
todos os números positivos menores ou iguais a N que são divisíveis por 3 ou por 5, mas não por
ambos*/

int main() {
    int n, soma = 1;
    printf ("Digite um numero: ");
    scanf ("%d", &n);

    while (n <= 0)
    {
        printf ("Digite um numero positivo: ");
        scanf ("%d", &n);

        if (n > 0){
            break;
        }
    }
    
    
    int i = 1;
    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 != 0)
        {
            soma += i;
        }
        else if (i % 5 == 0 && i % 3 != 0)
        {
            soma += i;
        }
        i++;
    }
    
    printf ("A soma e: %d\n", soma);

    return 0;
}