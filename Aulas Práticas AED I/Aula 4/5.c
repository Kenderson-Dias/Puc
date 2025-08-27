#include <stdlib.h>
#include <stdio.h>

/*Crie um algoritmo que solicita ao usuário dois número a e b. 
Mostre os números pares no intervalo entre a e b (inclusive)*/

int main() {
    int a, b, i = 0, limte;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a <= b) {
        limte = a;
    } else {
        limte = b;
    }
    while (i<= limte){
        if(i % 2 == 0){
        printf("%d\n", i);
        }
    }
    return 0;
}