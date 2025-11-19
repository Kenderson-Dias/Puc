#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que preencha dois vetores de inteiros A e B com 4 números ordenados
(em cada vetor). Em seguida, implemente um procedimento Merge, que receba os vetores A e B
e retorne um vetor C ordenado, combinando os resultados dos vetores A e B. Imprima o vetor C
na função main. A, B e C devem ser alocados usando malloc ou calloc.
Obs. 1: O vetor C deve ser instanciado (“alocado”) no procedimento Merge.
Obs. 2: Após a impressão dos valores, o comando free deve ser executado para liberação de
memória dos vetores A, B e C.*/ 

void merge (int a [], int b [], int *c){
    int i = 0, j = 0, k = 0;
    c = (int*)malloc(8 * sizeof(int));
    free(c);
    while (i < 8 && j < 8) {
        if (x[i] < y[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < 8) {
        c[k++] = a[i++];
    }
    while (j < 8) {
        c[k++] = b[j++];
    }
}

int main() {
    int *v1, *v2, *v3;
    v1 = (int*)malloc (4 * sizeof(int));
    free(v1);
    v2 = (int*)malloc (4 * sizeof(int));
    free(v2);
}

