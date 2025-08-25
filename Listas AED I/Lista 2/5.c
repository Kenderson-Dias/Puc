#include <stdlib.h>
#include <stdio.h>

/*Escreva um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
programa deve mostrar uma mensagem indicando incorreção na entrada de dados*/

int main() {
    int a, b, soma, subtracao, multiplicacao, divisao, modulo, opt;
    printf("Escolha a opcao:\n1.soma\n2.subtracao\n3.multiplicacao\n4.divisao\n5.modulo\n");
    scanf("%d", &opt);
    fflush(stdin);
    printf("Insira dois valores: ");
    scanf("%d %d", &a, &b);
    switch (opt) {
        case 1:
            soma = a + b;
            printf("%d + %d = %d", a, b, soma);
            break;
        case 2:
            subtracao = a - b;
            printf("%d - %d = %d", a, b, subtracao);
            break;
        case 3:
            multiplicacao = a * b;
            printf("%d x %d = %d", a, b, multiplicacao);
            break;
        case 4:
            divisao = a / b;
            printf("%d / %d = %d", a, b, divisao);
            break;
        case 5:
            modulo = a % b;
            printf("%d", modulo);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return 0;
}