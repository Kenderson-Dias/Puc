#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia dois inteiros e imprima um retângulo com as dimensões
digitadas*/

int main(){
    int n1, n2;
    printf("Quais as dimensoes (Ex: 3 5): ");
    scanf("%d %d", &n1, &n2);

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("*");
        }
        printf("*");
        printf("\n");
    }
    
}