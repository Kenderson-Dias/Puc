#include <stdio.h>
#include <stdlib.h>

/*Determinar se dois valores inteiros e positivos, A e B, são primos entre si.
Lembre-se que dois números inteiros são ditos primos entre si, caso o único divisor comum
aos dois números seja 1. Por exemplo, 4 e 5 são primos entre si.*/

int main(){
    int a, b, x, y, resto;
    printf("Insira os valores de a e b (a b): ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;
    while (y != 0) {
        resto = x % y;
        x = y;
        y = resto;
    }

    if (x == 1) {
        printf("Sao primos entre si\n");
    } else {
        printf("Nao sao primos entre si\n");
    }

    return 0;
}