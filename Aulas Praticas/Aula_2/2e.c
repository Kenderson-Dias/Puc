#include <stdio.h>
#include <stdlib.h>

/*2.e) Perímetro de um círculo de raio igual a cinco*/

int main(){
    // Declaração e atribuição do valor de pi
    float pi = 3.14;
    // Declaração e atribuição do valor do raio
    float raio = 5.0;
    // Declaração e atribuição do valor do perimetro
    float perimetro = raio * 2 * pi;

    //Escrita na tela do perimetro do circulo
    printf("\n Um quadrado de raio igual a %.2f", raio);
    printf("\n tem perimetro igual a %.2f", perimetro);

    return 0;
}