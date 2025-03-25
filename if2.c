#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Faça um algoritmo que receba dois número e mostre o
maior.*/

int main() 

{
    //Declara
    float n1, n2;
    //Entrada de dados
    printf("Insira dois números");
    scanf("%f, %f", &n1, &n2);

    //Se n1 > n2
    if (n1 > n2)
    {
        printf("%f é maior que %f", n1, n2);
    }
    //Se n2 > n1
    if (n2 > n1)
    {
        printf("%f é maior que %f", n2, n1);
    }
    //Se forem iguais
    if (n1 == n2)
    {
        printf("Não é possivel declarar um maior, pois os números são os mesmos");
    }
    
    return 0;
}