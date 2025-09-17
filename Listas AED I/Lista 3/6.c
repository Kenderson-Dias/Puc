#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci*/

int main(){
    int n, a = 0, b = 1, fib;
    printf("Digite quantos termos da serie de Fibonacci deseja: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        fib = a + b;
        a = b;
        b = fib;
    }
    printf("\n");
    return 0;
}