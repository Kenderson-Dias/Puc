#include <stdlib.h>
#include <stdio.h>

/*Faça um algoritmo que imprima os números ímpares
existentes de entre 1(inclusive) e 9 (inclusive)*/

int main() {
    int i = 0;
    while (i < 10)  {
        if (i % 2 != 0)
            printf("%d", i);
    }
    
    return 0;
}