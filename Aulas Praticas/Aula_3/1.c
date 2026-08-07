#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia um número e mostre uma
mensagem indicando se este número é par ou ímpar e se
é positivo ou negativo.*/

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    fflush(stdin);
    if(num % 2 == 0){
        printf("O numero %i e par", num);
    } else {
        printf("O numero %i e impar", num);
    }
}