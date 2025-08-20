#include <stdio.h>
#include <stdlib.h>

/*Implemente um algoritmo que solicite ao usuário um número inteiro n (digitado) e
posteriormente o sistema mostra o sucessor de n*/

int main() {

    int n = 0;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
    n++;

    printf("\nO sucessor é: %d", n);

    return 0;
}