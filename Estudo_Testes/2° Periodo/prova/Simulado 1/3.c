#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que calcule e imprima a soma de todos os números
ímpares, não múltiplos de 3, de 1 a n, onde n é um número inteiro positivo fornecido pelo
usuário*/

int main() {
    int n;
    do {
        printf("Insira um numero: ");
        scanf("%d", &n);
    } while (n < 1);

    for(int i = 1; i <= n; i++) {
        if(i % 3 != 0 && i % 2 != 0)
            printf("%d\t", i);
    }
}