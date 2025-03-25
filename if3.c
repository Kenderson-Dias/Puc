#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Faça um algoritmo que leia um número e mostre uma
mensagem indicando se este número é par ou ímpar e se
é positivo ou negativo.
*/

int main() 

{
    //Declara
    int num;
    //Entrada de dados
    printf("Digite um numero inteiro:");
    scanf("%d", &num);

    //Se for par e negativo
    if (num < 0 && num % 2 == 0)
    {
        printf("O numero %d e par e negativo", num);
    }
    //Se for par e positivo
    else if (num > 0 && num % 2 == 0)
    {
        printf("O numero %d e par e positivo", num);
    }
    //Se for impar e negativo
    else if (num < 0 && num % 2 != 0)
    {
        printf("O numero %d e impar e negativo", num);
    }
    
    //Se for impar e positivo
    else if (num > 0 && num % 2 != 0)
    {
        printf("O numero %d e impar e positivo", num);
    }
    //Se for zero
    else
    {
        printf("O numero e zero");
    }

    return 0;
}