#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Implemente um procedimento que preencha dois vetores, X e Y, cada um com 5 elementos.
Os valores devem ser inseridos pelo usu ́ario de forma j ́a ordenada (crescente). Em seguida, implemente
uma fun ̧c ̃ao que receba os dois vetores ordenados e gere um terceiro vetor Z, de 10 posi ̧c ̃oes, contendo
os elementos de X e Y mesclados, de forma que Z tamb ́em permane ̧ca ordenado. Exiba o vetor Z
resultante.*/


void cheio(int v[]){
    printf("Insira os valores em ordem crescente\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite um inteiro: ");
        scanf("%d", &v[i]);
        if (i >= 1) {
            if (v[i] < v[i-1]) {
                printf("Lembre-se de inserir os valores em ordem crescente\n");
            }
        }
    }
}

void shaZam(int x[], int y[], int z[]) {
    int i = 0, j = 0, k = 0;
    while (i < 5 && j < 5) {
        if (x[i] < y[j]) {
            z[k++] = x[i++];
        } else {
            z[k++] = y[j++];
        }
    }
    while (i < 5) {
        z[k++] = x[i++];
    }
    while (j < 5) {
        z[k++] = y[j++];
    }
}

int main(){
    int z[10], x[5], y[5];
    printf("Vetor X\n");
    cheio(x);
    printf("Vetor Y\n");
    cheio(y);
    shaZam(x, y, z);
    printf("Vetor Z:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", z[i]);
    }
    
    return 0;
}