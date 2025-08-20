#include <stdio.h>
#include <stdlib.h>

/*Implemente um programa que leia a quantidade de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcule e imprima o percentual de cada um dos tipos de votos
(brancos, nulos e válidos).*/

int main() {
    int branco, nulo, valido, total;
    float res;

    printf("\nInsira a quantidade de votos brancos: ");
    scanf("%d", &branco);
    printf("\nInsira a quantidade de votos nulos: ");
    scanf("%d", &nulo);
    printf("\nInsira a quantidade de votos validos: ");
    scanf("%d", &valido);

    total = branco + nulo + valido;
    res = branco * 100 / total;
    printf("\nVotos brancos = %f porcento", res);

    res = nulo * 100 / total;
    printf("\nVotos brancos = %f porcento", res);

    res = valido * 100 / total;
    printf("\nVotos brancos = %f porcento", res);

    return 0;
}