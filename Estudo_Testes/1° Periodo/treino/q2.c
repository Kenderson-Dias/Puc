#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo.*/

int main() {
    float vetor[5], vetor2[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    for (int j = 0; j <5; j++){
        vetor2[j] = vetor[j] * 2;
        printf("%.2f x 2 = %.2f\n", vetor[j], vetor2[j]);
    }
    
    return 0;
}