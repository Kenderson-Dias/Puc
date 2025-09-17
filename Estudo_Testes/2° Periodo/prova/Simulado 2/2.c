#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa em C que calcule e mostre o valor da conta de luz com
base no consumo mensal de energia elétrica*/

int main(){
    char s;
    float consumo, comp, conta;
    printf("Insira o valor consumido (em kWh): ");
    scanf("%f", &consumo);
    printf("Insira o preco cobrado pela companhia por kWh: ");
    scanf("%f", &comp);
    fflush(stdin);
    conta = consumo * comp;
    if (consumo < 0 || comp <= 0) {
        printf("Um dos dados inseridos eh invalido.\nLembre-se de colocar valores reais positivos");
    } else {
        printf("Voce eh cadastrado em algum programa social?\n[S]-Sim\n[N]-Nao\n");
        scanf("%c", &s);
        switch (s) {
        case 's':
            conta = conta / 2;
            printf("O valor da conta de luz eh: R$%.2f", conta);
            break;

        case 'n':
            printf("O valor da conta de luz eh: R$%.2f", conta);
            break;

        default:
            printf("Caracter invalido");
            break;
        }
        
    }
     
}