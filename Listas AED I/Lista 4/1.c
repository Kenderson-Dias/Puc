#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um procedimento que receba quatro notas de um estudante e um caractere. Se o
caractere for 'M', calcule e mostre a média aritmética. Se for 'W', calcule a média ponderada, com pesos 4, 3, 2 e 1. 
O programa principal deve ler os dados de vários alunos (até que seja digitada
uma nota negativa) e chamar o procedimento.*/

void calculador (float n1, float n2, float n3, float n4, char p) {
    int res = 0;
    if (p == 'M') {
        res = (n1 + n2 + n3 + n4) / 4;
    } else if (p == 'W') {
        res = (n1 * 4 + n2 * 3 + n3 * 2 + n4 * 1) / 10;
    } else {
        printf ("opcao invalida");
    }

    printf("%.2f", res);
}

int main() {
    float x1, x2, x3, x4;
    int cont = 0;
    char o;
    do{
        printf("Insira as notas: ");
        scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
        if (x1 < 0 || x2 < 0 || x3 < 0 || x4 < 0) {
            cont++;
        }
        printf("\nEscolha o tipo de media\n(M) - Aritimetica\n(W) - Ponderada\n");
        scanf("%c", &o);
        calculador (x1, x2, x3, x4, o);
    } while (cont < 1);
   
}