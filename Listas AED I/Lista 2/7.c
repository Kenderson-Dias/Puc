#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que calcule as raízes da equação do 2º grau (ax² + bx + c); os valores de
a, b e c são fornecidos pelo usuário*/

int main() {
    float a, b, c, r1, r2, delta;
    printf("Insira os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("O valor de 'a' deve ser diferente de zero.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: %.2f e %.2f\n", r1, r2);
    } else if (delta == 0) {
        r1 = -b / (2 * a);
        printf("A raiz e: %.2f\n", r1);
    } else {
        printf("Nao existem raizes reais.\n");
    }

    return 0;
}