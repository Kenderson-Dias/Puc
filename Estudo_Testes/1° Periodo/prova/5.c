#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*screva um programa para imprimir um padrão de asteriscos (*) na forma de
um triângulo retângulo INVERTIDO. O programa deve receber um número inteiro n como
entrada e imprimir n linhas de asteriscos, sendo que a primeira linha possui n asterisco, a
segunda linha possui n-1, e assim por diante até 1*/

int main(){
    int n;
    printf ("Digite um valor: ");
    scanf ("%d", &n);
    //Se for menor ou igual a 0
    if (n <= 0)
    {
        printf ("Valor invalido\n");
        return 1;
    } else {
        //Imprime os asteriscos
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf ("*");
            }
            printf ("\n");
        }
    }

    return 0;
    
}
//Acho q errei tudo dps dessa 5