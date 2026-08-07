#include <stdio.h>
#include <stdlib.h>

/*2.b) Perímetro de um quadrado de lado igual a cinco.*/

int main(){
    // Declaração e atribuição do valor do lado do quadrado
    float lado = 5.0;
    // Declaração, atribuição e cálculo do valor do perimetro do quadrado
    float perimetro = lado * 4;

    //Escrita na tela do perimetro do quadrado
    printf("\n Um quadrado de lado igual a %.2f", lado);
    printf("\n tem perimetro igual a %.2f", perimetro);

    return 0;
}
