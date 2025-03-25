#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que mostre ao usuário um menu com quatro opções de operações
matemáticas (1. soma, 2. subtração, 3. multiplicação, 4. divisão e 5. módulo). O usuário escolhe
uma das opções (1 a 5), e o seu programa recebe dois valores numéricos do usuário e realiza a
operação escolhida (somente a escolhida), mostrando o resultado. Caso a opção digitada seja
inválida (ou seja, menor que 1 ou maior que 5) ou os valores recebidos sejam inválidos, seu
programa deve mostrar uma mensagem indicando incorreção na entrada de dados.*/

int main(){
    int operacao;
    float x, y, resultado;

    printf("Escolha uma operacao matematica:\n1. soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Modulo\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
        //Soma
    case 1:
        printf("Voce escolheu a operacao de soma\n");
        printf("Digite dois valores: ");
        scanf("%f %f", &x, &y);
        resultado = x + y;
        printf("O resultado da soma e %.2f\n", resultado);
        break;
        //Subtração
    case 2:
        printf("Voce escolheu a operacao de subtracao\n");
        printf("Digite dois valores: ");
        scanf("%f %f", &x, &y);
        resultado = x - y;
        printf("O resultado da subtracao e %.2f", resultado);
        break;
        //Multiplicação
    case 3:
        printf("Voce escolheu a operacao de multiplicacao\n");
        printf("Digite dois valores: ");
        scanf("%f %f", &x, &y);
        resultado = x * y;
        printf("O resultado da multiplicacao e %.2f", resultado);
        break;
        //Divisão
    case 4:
        printf("Voce escolheu a operacao de divisao\n");
        printf("Digite dois valores: ");
        scanf("%f %f", &x, &y);
        if (y == 0)
        {
            printf("Divisao por zero nao e possivel");
        }
        else
        {
            resultado = x / y;
            printf("O resultado da divisao e %.2f", resultado);
        }
        break;
        //Módulo (essa demorou)
    case 5:
        printf("Voce escolheu a operacao de modulo\n");
        printf("Digite dois valores: ");
        scanf("%f %f", &x, &y);
        resultado = fmod(x, y);
        printf("O resultado do modulo e %.2f\n", resultado);
        break;
        //outros casos
    default:
        printf("Dados incorretos");
        break;
    }
    
    return 0;
}