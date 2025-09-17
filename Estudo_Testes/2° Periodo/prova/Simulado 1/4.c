#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que solicita a um usuário um valor que ele deseja investir
no mercado financeiro. O programa deve apresentar um menu de fundos de investimento,
contendo produtos que podem ser adquiridos, como segue:
Solicite ao usuário se ele deseja investir em algum fundo, indicando o número do mesmo e a
quantidade de cotas a serem adquiridas naquele fundo escolhido. Caso o produto informado
seja válido, imprima o nome fundo que ele investiu na tela e debite o valor do saldo do usuário
(quantidade x valor da cota). Caso o usuário não tenha saldo suficiente, indique que não será
possível investir no fundo, devido a insuficiência de saldo. O programa finalizará quando o
usuário digitar uma opção de produto inválida (≤ 0).*/

int main() {
    float saldo;
    int opt, qtd, valor = 0;
    printf("Insira o saldo (em reais): ");
    scanf("%f", &saldo);
    do {
        printf("\nEscolha o fundo que deseja investir\n[1]- FAB\n[2]- FAE\n[3]- FTB\n[4]- FTA\n[0]- Finalizar\n");
        scanf("%d", &opt);
        switch (opt) {
        case 1:
            printf("Saldo atual: R$%.2f\nO valor da cota e de R$200\nInsira quantas cotas vai adquirir: ", saldo);
            scanf("%d", &qtd);
            valor = qtd * 200;
            if (valor > saldo) {
                printf("\nSaldo insuficiente");
            } else {
                printf("Voce investiu R$%d em Fundo de Acoes de Empresas Brasileiras", valor);
                saldo -= valor;
                printf("\nSeu novo saldo e: R$%.2f", saldo);
            }
            break;

        case 2:
            printf("Saldo atual: R$%.2f\nO valor da cota e de R$300\nInsira quantas cotas vai adquirir: ", saldo);
            scanf("%d", &qtd);
            valor = qtd * 300;
            if (valor > saldo) {
                printf("\nSaldo insuficiente");
            } else {
                printf("Voce investiu R$%d em Fundo de Acoes de Empresas Norte Americanas", valor);
                saldo -= valor;
                printf("\nSeu novo saldo e: R$%.2f", saldo);
            }
            break;

        case 3:
            printf("Saldo atual: R$%.2f\nO valor da cota e de R$50\nInsira quantas cotas vai adquirir: ", saldo);
            scanf("%d", &qtd);
            valor = qtd * 50;
            if (valor > saldo) {
                printf("\nSaldo insuficiente");
            } else {
                printf("Voce investiu R$%d em Fundo de Titulos do Tesouro Nacional (Brasil)", valor);
                saldo -= valor;
                printf("\nSeu novo saldo e: R$%.2f", saldo);
            }
            break;

        case 4:
            printf("Saldo atual: R$%.2f\nO valor da cota e de R$100\nInsira quantas cotas vai adquirir: ", saldo);
            scanf("%d", &qtd);
            valor = qtd * 100;
            if (valor > saldo) {
                printf("\nSaldo insuficiente");
            } else {
                printf("Voce investiu R$%d em Fundo de Titulos do Tesouro Norte Americano", valor);
                saldo -= valor;
                printf("\nSeu novo saldo e: R$%.2f", saldo);
            }
            break;
        
        case 0:
            printf("Programa encerrado");
            break;

        default:
            printf("Opcao Invalida");
            break;
        }

    } while (opt > 0);
    
}