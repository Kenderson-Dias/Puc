#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*2.c) Área de um quadrado de lado igual a sete.*/

int main(){
    // Declaração e atribuição do valor do lado do quadrado
    float lado = 5.0;
    // Declaração, atribuição e cálculo do valor do perimetro do quadrado
    float area = pow(lado, 2);

    //Escrita na tela do perimetro do quadrado
    printf("\n Um quadrado de lado igual a %.2f", lado);
    printf("\n tem area igual a %.2f", area);

    return 0;
}