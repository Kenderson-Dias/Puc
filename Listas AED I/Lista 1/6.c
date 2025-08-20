#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um programa que receba 2 pontos cartesianos (x, y) e calcule a distância Euclidiana
entre eles.*/

int main() {
    int x1, x2, y1, y2;
    float d;

    printf("\nInsira o primeiro ponto [Modelo x,y]: ");
    scanf("%d,%d", &x1, &y1);
    printf("\nInsira o segundo ponto [Modelo x,y]: ");
    scanf("%d,%d", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nA distancia Euclidiana entre os pontos é: %2.f", d);

    return 0;
}