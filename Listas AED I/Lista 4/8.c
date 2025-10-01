#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um procedimento que leia 3 números inteiro (a, b, c). Para cada valor lido, mostre o nome
da variável, o endereço e o seu valor, conforme exemplificado a seguir*/

void listaGem(int a, int b, int c) {
    printf("NOME_VARIAVEL\tENDERECO\tVALOR\n\ta\t%p\t  %d\n\tb\t%p\t  %d\n\tc\t%p\t  %d\n", &a, a, &b, b, &c, c);
}

int main() {
    int x, y, z;
    printf("Insira tres inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    listaGem(x, y, z);
}