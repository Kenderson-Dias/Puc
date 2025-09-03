#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia quatro números inteiros positivos (w, x, y e z) e efetue o cálculo
de uma das seguintes médias de acordo com o valor de w conforme a tabela a seguir*/

int main() {
    int w, x, y, z;
    float res;
    printf("Insira tres valores: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("---- Selecione o tipo de media ----\n1.Geometrica\n2.Ponderada\n3.Harmonica\n4.Aritmetica\n* ");
    scanf("%d", &w);

    switch (w) {
        case 1:
            res = sqrt(x*y*z);
            printf("%.2f", res);
            break;
        case 2:
            res = (x + 2 * y + 3 *z) / 6;
            printf("%.2f", res);
            break;
        case 3:
            res = 3 / 1/x + 1/y + 1/z;
            printf("%.2f", res);
            break;
        case 4:
            res = (x + y + z) / 3;
            printf("%.2f", res);
            break;
        default:
            printf("Valor invalido");
            break;
    }
    return 0;
}