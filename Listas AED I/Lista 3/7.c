#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*escreva um programa que leia dois inteiros e imprima um retângulo com as dimensões
digitadas.*/

int main(){
    int l, a;
    printf("Insira as dimensoes do retangulo (largura x altura): ");
    scanf("%d %d", &l, &a);

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < l; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}