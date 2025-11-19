#include <stdio.h>
#include <stdlib.h>

const int MAX_LIN=10;
const int MAX_COL=5;

/*Construa uma função que calcule e retorne a soma dos valores de uma linha i de uma matriz.
A função deverá ter os seguintes argumentos:
- A passagem por referência da matriz;
- O número da linha a ser calculada.*/

int somaLine (int triz [MAX_LIN] [MAX_COL], int lin) {
    int res = 0, i, j;
    for (i = lin; i <= lin; i++){
        for (j = 0; j < MAX_COL; j++){
            res += triz [i] [j];
        }
    }
    return res;
}

/*Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa uma função que calcule
a soma dos valores posicionados acima da diagonal principal.*/

int somaUpDiagona(int triz[MAX_LIN][MAX_LIN]) {
    int soma = 0, i, j;
    for (i = 0; i < MAX_LIN; i++) {
        for (j = 0; j < MAX_COL; j++) {
            if (i > j) {
                soma += triz[i][j];
            }
            
        }
    }
    return soma;
}


/*Considere uma matriz quadrada MAX_LIN x MAX_LIN. Construa um procedimento que
escreva os elementos da diagonal secundária.*/

void mostraSecDiagonal (int triz [MAX_LIN] [MAX_LIN]) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", triz[i][MAX_LIN - 1 - i]);
    }
    printf("\n");
}


/*Procedimento que preenche a matrix*/
void preencheMatrix (int triz [MAX_LIN] [MAX_COL]) {
    int i;
    for (i = 0; i < MAX_LIN; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            printf("Insira o inteiro da posicao (%d,%d): ", i+1, j+1);
            scanf("%d", &triz[i] [j]);
        } 
    }
}

int main() {
    int opt, matrix [MAX_LIN] [MAX_COL], line, mostrador;
    preencheMatrix(matrix);
    do {
        printf("\n---Menu de exercicios---\n1. Questao 1\n2. Questao 2\n3. Questao 3\n0. Encerrar Programa\nDigite sua opcao: ");
        scanf("%d", &opt);
        switch (opt) {
        case 1:
            printf("Insira a linha: ");
            scanf("%d", &line);
            mostrador = somaLine(matrix, line);
            printf("Soma dos valores da linha %d = %d", line, mostrador);
            break;
        case 2:
            mostrador = somaUpDiagona(matrix);
            printf("A soma dos valores acima da diagonal eh: %d", mostrador);
            break;
        case 3:
            mostraSecDiagonal(matrix);
            break;
        case 0:
            printf("Programa encerrado");
            break;
        default:
            printf("Escolha uma opcao valida");
            break;
        }
    } while (opt != 0);
    
    return 0;
}
