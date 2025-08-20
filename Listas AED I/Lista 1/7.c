#include <stdio.h>
#include <stdlib.h>

/*Implemente um algoritmo com as linhas a seguir e apresente no código-fonte uma explicação
detalhada, com suas palavras, do que acontece em cada uma das linhas:*/

int main() {
    int a, b, c, d = 1; //Declara as variaveis a, b, c e d, sendo que d recebe o valor de -1
    a = -2; //Atribui valor a variavel 'a' = -2
    b = a*a; //Atribui o valor de "a*a" [-2*-2] a 'b'
    c = d++; //Atribui "d" [1] a c e emseguida incrementa d para [2]
    d = c++ + 5; //Altera o valor de d para "1 + 5" [6] e incrementa c para [2]
    d = ++c + 5; //Incrementa o valor d c para [3] e altera o valor de d para "c + 5" [8]
    printf("%d %d %d %d", a, b, c, d); //Printa os valores das variaveis
}