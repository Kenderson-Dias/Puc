#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci*/

int main(){
    int n1 = 0, n2 = 1, cont, fib;
    printf("Insira quantos numeros quer mostrar: ");
    scanf("%d", &cont);
    for (int i = 1; i <= cont; i++) {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
        printf("%d\n", fib);
    }
    
}
