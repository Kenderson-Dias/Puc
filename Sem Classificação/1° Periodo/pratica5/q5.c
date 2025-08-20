#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que seja capaz de ler do teclado 31 valores reais correspondentes ao
índice pluviométrico diário da região da Pampulha durante o mês de janeiro. O programa deve
determinar e imprimir o índice pluviométrico médio, o índice pluviométrico máximo e o dia que
ele ocorreu.*/

int main() 
{
    int n, med, max, soma = 0;

    for (int d = 1; d <= 31; d++)
    {
        printf("\nDigite o indice do dia: ");
        scanf("%d", &n);
        soma += n;

        if (d == 31)
        {
            med = soma % 12;   
            printf("A media e %d", med); 
        }
        
    }
    
}