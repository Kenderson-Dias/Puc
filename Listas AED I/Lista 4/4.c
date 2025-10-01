#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva uma função que receba como parâmetro um valor n inteiro positivo, calcule e retorne
o valor de E, definido pela equação abaixo*/

float oilar (int n) {
    float volta = 1, fat = 1;

    if (n < 0) {
        return -1.0; 
    }

    for (int i = 1; i <= n; i++) {
        fat *= i;
        volta += 1 / fat;
    }
    return volta;
}

int main() {
    int num;
    float res;
    printf("Insira o valor de n: ");
    scanf("%d", &num);
    res = oilar(num);
    if (res == -1) {
        printf("Voce inseriu um valor invalido");
    } else {
        printf("Resultado = %f", res);
    }
    
}