#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/* Escreva um programa para imprimir os números ímpares entre 3 até 999.
Utilize a estrutura de repetição while.*/

int main()
{
    int x = 3;

    while (x <= 999)
    {
        if (x % 2 != 0) {
            printf("%d\n", x);
        }

        x++;
    }    

    return 0;
}
