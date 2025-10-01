#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Crie um procedimento que receba três inteiros e os exiba em ordem decrescente.
O main deve repetir a leitura de conjuntos de três valores até que o primeiro seja zero*/

void descrente (int x, int y, int z) {
    int maior, menor, meio;
    maior = menor = meio = x;
    if (x < y && y > z) {
        maior = y;
    } else if (x < z && z > y) {
        maior = z;
    }
    if (x > y && y < z) {
        menor = y;
    } else if (x > z && z < x) {
        menor = z;
    }
    if (x < y && y < z) {
        meio = y;
    } else if (x < z && z < y) {
        meio = z;
    }
    
    printf("%d %d %d\n", maior, meio, menor);
    
}

int main() {
    int a, b, c;
    do {
        printf("Insira tres inteiros: ");
        scanf("%d %d %d", &a, &b, &c);
        descrente(a, b, c);
    } while (a != 0);
    
}