#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e retorne
o valor da soma S, definida pela equação abaixo*/

double retornaS (int n) {
    int n1 = 1, n2 = 1;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += n1 / n2;
        n1 = i * (i + 2);
        n2 += i + 4;
    } 
    return s;
}

int main() {
    int k;
    double res
    printf("Insira o valor de S: ");
    scanf("%d", &k);
    res = retornaS(k);
    printf("S = %g", res);
}