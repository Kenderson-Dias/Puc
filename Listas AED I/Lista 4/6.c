#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um procedimento que recebe por parâmetro 3 valores reais X, Y e Z e que verifique se
esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é
o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte
propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma
do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo
formado observando as seguintes definições:
1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;*/

void triangulador(float x, float y, float z) {
    if (x < y + z && y < z + x && z < y + x) {
        if (x == z && z == y) {
            printf("\nTriangulo Esquilatero");
        } else if (x == z || z == y || y == x) {
            printf("\nTriangulo Isosceles");
        } else {
            printf("\nTriangulo Escaleno");
        }
    }
}

int main() {
    float a, b, c;
    printf("Insira as dimensoes do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    triangulador(a, b, c);
}