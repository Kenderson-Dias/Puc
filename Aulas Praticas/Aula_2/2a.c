#include <stdio.h>
#include <stdlib.h>

/*2.a) Perímetro correspondente para o retângulo do exercício anterior*/

int main(){
    // Declaração e atribuição do valor da base do rêtangulo
    float base = 3.5;
    // Declaração e atribuição do valor da altura do rêtangulo
    float altura = 2.0;
    // Declaração, atribuição e cálculo da área do rêtangulo
    float perimetro = (base + altura) * 2;
    
    //Escrita na tela da área do rêtangulo
    printf("\n Um retangulo de base igual a %.2f", base);
    printf("\n e altura igual a %.2f", altura);
    printf("\n tem um perimetro igual a %.2f\n", perimetro);

    return 0;
}