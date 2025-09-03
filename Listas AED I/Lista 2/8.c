#include <stdlib.h>
#include <stdio.h>

<<<<<<< HEAD
/*screva um programa que calcule a velocidade de queda de um corpo em função do tempo,
=======
/*Escreva um programa que calcule a velocidade de queda de um corpo em função do tempo,
>>>>>>> 9c1f5081f0fde7f2cb2e2f64fa1e816c9a50f889
partindo da velocidade zero, considerando a gravidade de diferentes planetas conforme a tabela
a seguir. Seu programa deve receber do usuário o tempo (em milissegundos) de queda e um
caractere indicando o planeta em que a queda ocorreu*/

<<<<<<< HEAD
int main(){

=======
int main() {
    char p;
    float t, v, g;

    printf("---Escolha o Planeta---\nT - para Terra\nV - para Venus\nM - para Mercurio\n");
    scanf("%c", &p);
    printf("Insira o tempo de queda (Em milisegundos): ");
    scanf("%f", &t);

    if (t > 0) {
        switch (p) {
            case 'T':
                g = 9.807;
                v = g * t;
                v/= 1000;
                printf("velocidade = %.3fm/s",v);
                break;
            case 'V':
                g = 8.87;
                v = g * t;
                v/= 1000;
                printf("velocidade = %.3fm/s",v);
                break;

            case 'M':
                g = 3.7;
                v = g * t;
                v/= 1000;
                printf("velocidade = %.3fm/s",v);
                break;

            default:
                printf("Digito incorreto, lembre-se que a inicial do planeta deve ser maiuscula");
                break;
        }
    } else {
        printf("ERRO 0194\nInsira um valor maior que 0 para o tempo");
    }
    return 0;
>>>>>>> 9c1f5081f0fde7f2cb2e2f64fa1e816c9a50f889
}