#include <stdio.h>
#include <stdlib.h>

/*Escreva um procedimento que leia, para um número indefinido de famílias, a renda mensal e
o número de dependentes (encerre quando a renda for negativa).
Mostre a renda média per capita da cidade.*/

//Calcula a renda media da familia recebendo uma float e um inteiro e retorna um float
void renda () {
    float fam, city = 0;
    int num;
    do {
        printf("insira a renda: ");
        scanf("%f", &fam);
        printf("Quantos membros tem a familia: ");
        scanf("%d", &num);
        city += fam / num;

    } while (fam >= 0);
    printf("A renda media da cidade eh: %.2f", city);
}

int main() {
    renda();
    return 0;
}