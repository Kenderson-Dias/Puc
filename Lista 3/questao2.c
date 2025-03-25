#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*mplementar um algoritmo que solicita um número inteiro ao usuário, calcule e mostre o seu
fatorial.*/

int main(){
    int soma = 1, n; 
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &n);

    if (n == 0)
    {
        printf ("O fatorial de 0 e 1");

    } else {
        int i = 1;
        
        while (i <= n) {
        soma *= i;
        i++;

        }
        printf("O fatorial e: %d", soma);
    }

    return 0;
}
    //Esse me fez questionar se eu realmente sei alguma coisa de programação (maldito soma = 0)