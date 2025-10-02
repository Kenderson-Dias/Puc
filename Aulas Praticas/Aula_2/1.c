#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaração e atribuição do valor da base do rêtangulo
    float base = 3.5;
    // Declaração e atribuição do valor da altura do rêtangulo
    float altura = 2.0;
    // Declaração, atribuição e cálculo da área do rêtangulo
    float area = base * altura;
    
    //Escrita na tela da área do rêtangulo
    printf("\n Um retangulo de base igual a %f", base);
    printf("\n e altura igual a %f", altura);
    printf("\n tem uma area igual a %f\n", area);

    return 0;
}