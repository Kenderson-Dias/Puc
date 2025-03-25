#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Desenvolva um algoritmo que leia um valor n inteiro e positivo e que calcula a seguinte soma
S abaixo:*/

int main() 
{
    int s, n;
    printf("Digite um numero inteiro: ");
    scanf("%d", n);

    for (int cont = 1; cont < n ; cont++)
    {
        s /= cont/n;
    }
    



}