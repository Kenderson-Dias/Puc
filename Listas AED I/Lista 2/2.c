#include <stdlib.h>
#include <stdio.h>

/*Escreva um programa que calcule a amplitude total (AT) de uma série de cinco números. A
amplitude e definida pela diferença entre o menor e o maior número*/

int main() {
    int a, b, c, d, e, maior, menor, res;
    printf("Insira 5 numeros: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    maior = a;
    menor = a;

    if(b > maior)
     maior = b;
    if(c > maior)
     maior = c;
    if(d > maior)
     maior = d;
    if(e > maior)
     maior = e;
    if(b < menor)
     menor = b;
    if(c < menor)
     menor = c;
    if(d < menor)
     menor = d;
    if(e < menor)
     menor = e;    
    res = maior - menor;
    printf("A amplitude total e: %d\n", res);
}