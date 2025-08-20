#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Implemente um programa que o usuário informa o valor a ser investido, uma taxa de juros
mensal a ser aplicada ao capital, e o número de meses que irá durar a aplicação. Ao final o
programa deverá mostrar:
• O valor total acumulado ao final período.
• O valor de juros rendidos.*/

int main() {
    float m, c, i;
    int t;

    printf("\nInsira o capital a ser investido: ");
    scanf("%f", &c);
    printf("\nInsira a taxa de juros: ");
    scanf("%f", &i);
    printf("\nInsira por quantos meses durara seu investimento: ");
    scanf("%d", &t);

    m = c * pow((1+i),t);

    printf("\nO valor total ao final do periodo de %d meses é rR$%f", t, m);
    printf("\nO total de juros foi de: %.2f", i*t);

    return 0;
}