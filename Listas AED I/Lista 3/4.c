#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Desenvolva um algoritmo que leia um valor n entre 0 e 9 e escreva na tela a tabuada
correspondente do número.*/

int main(){
    int n;
    printf("Insira um numero entre 0 e 9: ");
    scanf("%d", &n);
    if (n < 0 || n > 9)
    {
        printf("Valor invalido");
    } else {
    
        for (int i = 0; i < 10; i++) {
            printf("%d x %d = %d\n", n, i, n*i);
        }
    }
}