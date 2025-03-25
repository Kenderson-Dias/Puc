#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que apresente o menu de opções a seguir e permita ao usuário escolher a
opção desejada. Leia os dados necessários para executar a operação e mostre o resultado. Esse
processo deverá ser repetido até que o usuário escolha a opção 4.*/

int main() {
    int opcao;

    while (opcao != 4)
    {
        printf("Escolha uma opcao:\n");
        printf("1 - Novo salario\n");
        printf("2 - Ferias\n");
        printf("3 - Decimo terceiro\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
    
        switch (opcao){
            case 1:{
                float salario, aumento;
                printf("Digite o salario: ");
                scanf("%f", &salario);

                if (salario < 1000)
                {
                    aumento = salario * 0.15;
                }
                else if (salario <= 2000)
                {
                    aumento = salario * 0.1;
                }
                else
                {
                    aumento = salario * 0.05;
                }
                printf("O novo salario e: %.2f\n", salario + aumento);
                break;
            }

        case 2:{
                float salario,ferias;
                printf("Digite o salario: ");
                scanf("%f", &salario);

                ferias = salario + salario / 3;
                
                printf("O valor das ferias e: %.2f\n", ferias);
                break;
                }

        case 3:{
                int meses;
                float salario, decimo;
                printf("Digite o salario: ");
                scanf("%f", &salario);
                printf("Digite o numero de meses trabalhados: ");
                scanf("%d", &meses);

                    if (meses > 12)
                    {
                    printf ("Numero de meses invalido\n");
                    }
                

                decimo = (salario * meses) / 12;
                
                printf("O valor do decimo terceiro e: %.2f\n", decimo);
                break;
            }
        default:
            do {
                printf("Opcao invalida\n");
                printf("Escolha uma opcao:\n");
                printf("1 - Novo salario\n");
                printf("2 - Ferias\n");
                printf("3 - Decimo terceiro\n");
                printf("4 - Sair\n");
                scanf("%d", &opcao);
            } while (opcao < 1 || opcao > 4);
            break;
        }
    
    }
    return 0;
}
