#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*esenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci. Ex.: Se
n = 10, imprimir os 10 primeiros números da sequência de Fibonacci*/

int main() {
    int n, i, f, f1 = 0, f2 = 1;
    printf ("Digite um numero: ");
    scanf ("%d", &n);

    for (i = 0; i <= n; i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;            
        printf ("O enesimo termo e: %d\n", f);
    }
    
    return 0;

}