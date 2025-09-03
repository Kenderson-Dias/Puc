#include <stdio.h>
#include <stdlib.h>

/*Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números.*/

int main() {
    float a, b, c, maior, menor, meio;

    printf("Digite tres numeros reais: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    
    if ((a != maior) && (a != menor)){
        meio = a;
    } else if ((b != maior) && (b != menor)){
        meio = b;
    } else {
        meio = c;
    }
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Do meio: %.2f\n", meio);

    return 0;
}