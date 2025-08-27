#include <stdlib.h>
#include <stdio.h>

/*Crie um algoritmo que solicita ao usuário 3 números inteiros e 
mostra o seu menor*/

int main() {
    int n1, n2, n3, menor;
    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    menor = n1 < n2 ? (n1 < n3 ? n1 : (n2 < n3 ? (n2 < n1 ? n2 : (n3 < n1 ? (n3 < n2 ? n3)))));

    printf("%d", menor);
}