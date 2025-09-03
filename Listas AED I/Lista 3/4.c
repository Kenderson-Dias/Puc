#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Desenvolva um algoritmo que leia um valor n entre 0 e 9 e escreva na tela a tabuada
correspondente do número. */

int main(){
    int n, res;
    printf("Insira um valor entre 0 e 9: ");
    scanf("%d", &n);
    if (n < 0 || n > 9)
        printf("Valor invalido");
    for(int i = 0; i <= 10; i++){
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
    }
}