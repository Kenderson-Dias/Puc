#include <stdlib.h>
#include <stdio.h>

/*Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
partindo da velocidade zero, considerando a gravidade de diferentes planetas conforme a tabela
a seguir. Seu programa deve receber do usuário o tempo (em milissegundos) de queda e um
caractere indicando o planeta em que a queda ocorreu*/

int main() {
    char p;
    float t, v, g;

    printf("---Escolha o Planeta---\nT - para Terra\nV - para Venus\nM - para Mercurio\n");
    scanf("%c", &p);
    printf("Insira o tempo de queda (Em milisegundos): ");
    scanf("%f", &t);
    switch (p) {
        case 'T':
            g = 9.807;
            v = g * t;
            v/= 1000;
            printf("%.3fm/s",v);
            break;
        case 'V':
            g = 8.87;
            v = g * t;
            v/= 1000;
            printf("%.3fm/s",v);
            break;

        case 'M':
            g = 3.7;
            v = g * t;
            v/= 1000;
            printf("%.3fm/s",v);
            break;

        default:
            printf("Digito incorreto, lembre-se que a inicial do planeta deve ser maiuscula");
            break;
    }
    return 0;
}