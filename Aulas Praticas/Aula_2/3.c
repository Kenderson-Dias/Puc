#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que solicita para o usuário um número inteiro n (digitado) e posteriormente
o sistema mostra o sucessor de n*/

int main(){
    // Declaração da variavel n
    int n = 0;
    //Pede ao usuario que digite um valor
    printf("Insira um numero inteiro: ");
    //Lê o valor digitado para o usuario
    scanf("%d", &n);
    //Incrementa o valor digitado
    n++;

    printf("\nO sucessor é: %d", n);
}