#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que indique o nome do mês por extenso, de acordo com um número
digitado pelo usuário.*/

int main(){
    int mes;
    char janeiro = '1', fevereiro = '2', marco = '3',
     abril = '4', maio = '5', junho = '6', julho = '7',
     agosto = '8', setembro = '9', outubro = '10',
     novembro = '11', dezembro = '12';
    //os numeros também funcionam se colocados entre aspas simples
    
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    if (mes == 1)
    {
        printf("Janeiro");
    }
    else if (mes == 2)
    {
        printf("Fevereiro");
    }
    else if (mes == 3)
    {
        printf("Marco");
    }
    else if (mes == 4)
    {
        printf("Abril");
    }
    else if (mes == 5)
    {
        printf("Maio");
    }
    else if (mes == 6)
    {
        printf("Junho");
    }
    else if (mes == 7)
    {
        printf("Julho");
    }
    else if (mes == 8)
    {
        printf("Agosto");
    }
    else if (mes == 9)
    {
        printf("Setembro");
    }
    else if (mes == 10)
    {
        printf("Outubro");
    }
    else if (mes == 11)
    {
        printf("Novembro");
    }
    else if (mes == 12)
    {
        printf("Dezembro");
    }
    else
    {
        printf("Mes invalido");
    }

    return 0;
}