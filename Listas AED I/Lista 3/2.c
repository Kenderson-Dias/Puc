#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que recebe um ano do usuário e imprime na tela todos os anos bissextos
do ano 1 até o ano digitado. Utilize a estrutura de repetição while.*/

int main(){
    int anolimite, ano = 1;
    printf("Insira o ano limite: ");
    scanf("%d", &anolimite);
    while (ano <= anolimite) {
        if (ano % 4 == 0) {
            printf("%d\t", ano);
        }
        ano++;
    }
    
}