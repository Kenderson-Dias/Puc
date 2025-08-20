#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que calcule as raízes da equação do 2º grau (ax² + bx + c); os valores de
a, b e c são fornecidos pelo usuário.*/

int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    //equação
    delta = pow(b, 2) - 4 * a * c;

    //raizes
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);

    return 0;
}