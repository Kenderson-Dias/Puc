#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
partindo da velocidade zero, considerando a gravidade de diferentes planetas conforme a tabela
a seguir. Seu programa deve receber do usuário o tempo (em milissegundos) de queda e um
caractere indicando o planeta em que a queda ocorreu.*/

int main(){
    float tempo, velocidade;
    char planeta;
    printf("Digite o tempo de queda em milissegundos: ");
    scanf("%f", &tempo);
    printf("Digite a incial do planeta em que a queda ocorreu: ");
    scanf(" %c", &planeta);

    switch (planeta){
        //Mercurio
        case 'M':
            velocidade = 3.7 * tempo;
            break;
        //Venus
        case 'V':
            velocidade = 8.87 * tempo;
            break;
        //Terra
        case 'T':
            velocidade = 9.807 * tempo;
            break;

        default:
            printf("Planeta invalido\n");
            return 0;
    }
    printf("A velocidade de queda do corpo foi de %.2f m/s\n", velocidade);

    return 0;
}