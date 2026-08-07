#include <stdio.h>
#include <stdlib.h>

/*Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
(produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.*/

int main() {
    char destino;
    float produto, preco;
    printf("Insira o valor do produto: ");
    scanf("%f", &produto);
    fflush(stdin);
    printf("Qual o destino (M, S, R, E): ");
    scanf("%c", &destino); 

    if(destino == 'M' || destino == 'm') {
        preco = produto + (produto * 0.07);
        printf("%.2f\n", preco);
    } else if (destino == 'S' || destino == 's') {
        preco = produto + (produto * 0.12);
        printf("%.2f\n", preco);
    } else if (destino == 'R' || destino == 'r') {
        preco = produto + (produto * 0.15);
        printf("%.2f\n", preco);
    } else if (destino == 'E' || destino == 'e') {
        preco = produto + (produto * 0.08);
        printf("%.2f\n", preco);
    } else {
        printf("Invalido. Insira uma entrada valida");
    }

    return 0;
}