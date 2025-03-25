#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*3. Escreva um algoritmo que leia n valores, um de cada vez, e conte quantos destes valores são
pares, escrevendo esta informação. A leitura deve finalizar quando o valor lido for igual a 0.*/

int main() 
{
    int n, x;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    
    do{
        int x = n;
        if (x % 2 != 0)
        {
            printf("\nO numero %d e impar", x);
        } else {
            printf("\nO numero %d e par", x);
        }
        n--;
    } while (n >= 0);
   
    return 0;
}