#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*Implemente um procedimento preencheValores que preencha 2 vetores X e Y, com 10
elementos cada com valores aleatórios entre 10 e 20. Implemente um procedimento que receba
os dois vetores previamente preenchidos e gere um novo vetor Z com os elementos desses 2
vetores intercalados de tal forma que nas posições ímpares do novo vetor estejam os elementos
do primeiro vetor e nas posições pares os elementos do segundo vetor recebido por parâmetro.
Faça um procedimento que receba e exiba o conteúdo de um vetor. Implemente um programa
que faça as devidas declarações e acione os módulos para exemplificar o seu uso.*/

//Procedimento que gera os numeros aleatorios
void preencheValores(int *x, int *y, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 11 + 10; // Gera números entre 10 e 20 para o primeiro vetor
        y[i] = rand() % 11 + 10; // Gera números entre 10 e 20 para o segundo vetor
    }
}
//Procedimento que exibe os vetores
void exibeVetor(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void intercala(int x[], int y[], int length, int z[]) {
    for (int i = 0; i < length; i++) {
        z[i * 2] = x[i]; // Posições pares
        z[i * 2 + 1] = y[i]; // Posições ímpares
    }
}
int main() {
    int v1[10], v2[10], r[20];

    //Chama o procedimento para prencher os vetores
    preencheValores(v1, v2, 10);

    //Exibe os vetores criados
    printf("Vetor 1: ");
    exibeVetor(v1, 10);
    printf("Vetor 2: ");
    exibeVetor(v2, 10);

    //Chama o procedimento qque intercala os vetores
    intercala(v1, v2, 10, r);
    printf("Intercalado: ");
    exibeVetor(r, 20);
    
    return 0;
}