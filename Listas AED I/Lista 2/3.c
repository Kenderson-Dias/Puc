#include <stdlib.h>
#include <stdio.h>

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
    switch (destino) {
        case 'M':
            preco = produto + (produto * 0.07);
            printf("%.2f\n", preco);
            break;
        case 'S':
            preco = produto + (produto * 0.12);
            printf("%.2f\n", preco);
            break;
        case 'R':
            preco = produto + (produto * 0.15);
            printf("%.2f\n", preco);
            break;
        case 'E':
            preco = produto + (produto * 0.08);
            printf("%.2f\n", preco);
            break;
        default:
            printf("Invalido. Coloque as iniciais com letras maiusculas\n");
    }

    return 0;
}