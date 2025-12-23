#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que receba dois número e mostre o
maior.*/

int main(){
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%i %i", &num1, &num2);
    fflush(stdin);
    if(num1 > num2)
        printf("O maior e %i", num1);
    if(num2 > num1)
        printf("O maior e %i", num2);
    if(num1 == num2)
        printf("O dois são iguais");
}