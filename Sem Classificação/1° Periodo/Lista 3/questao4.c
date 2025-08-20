#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Implementar um algoritmo que solicita um número inteiro positivo N e mostre o enésimo termo da
sequência de Fibonacci. Essa sequência começa no termo de ordem zero e, a partir do segundo termo,
seu valor é dado pela soma dos dois termos anteriores. Exemplo: para N == 8, o enésimo termo é 13,
uma vez que a sequência de Fibonacci até o oitavo termo é: 0,1,1,2,3,5,8,13*/

int main() {
    int n, i, f, f1 = 0, f2 = 1;
    printf ("Digite um numero: ");
    scanf ("%d", &n);

    if (n == 0)
    {
        printf ("O enesimo termo e: 0\n");
    }
    else if (n == 1)
    {
        printf ("O enesimo termo e: 1\n");
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        printf ("O enesimo termo e: %d\n", f);
    }

    return 0;
}