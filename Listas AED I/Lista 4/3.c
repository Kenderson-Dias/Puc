#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem
decrescente. Faça um programa main que leia do teclado n conjuntos de 3 valores e acione o
procedimento para cada conjunto.*/
void decresce (int x, int y, int z, int p) {
    int maior, menor, meio;
    maior = x;
    if (y > maior) {
        maior = y;
    }
    if (z > maior) {
        maior = z;
    }
    menor = x;
    if (y < menor) {
        menor = y;
    }
    if (z < menor) {
        menor = z;
    }

    
    if ((x != maior) && (x != menor)){
        meio = x;
    } else if ((y != maior) && (y != menor)){
        meio = y;
    } else {
        meio = z;
    }
    printf("\nConjunto %d: %d %d %d", p + 1, maior, meio, menor);
}

int main() {
    int a, b, c, n;
    printf("Insira quantos conjuntos serao: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nInsira tres inteiros: ");
        scanf("%d %d %d", &a, &b, &c);
        decresce(a, b, c, i);
    }
}