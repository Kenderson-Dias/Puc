#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que recebe um ano do usuário e imprime na tela todos os anos bissextos
do ano 1 até o ano digitado. Utilize a estrutura de repetição while*/

int main(){
    int ano, i = 1;
    printf("Insira o ano inicial: ");
    scanf("%d", &ano);
    while (i <= ano) {
        if(i % 4 == 0){
            printf("%d\n", i);
        }
        i++;
    }
    
}