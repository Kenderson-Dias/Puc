#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*Implemente um procedimento preencheNotas que receba e preencha um vetor com as notas
de uma turma de 10 alunos. Faça um procedimento calculaMedia que receba um vetor
preenchido com as notas, calcule a média da turma e conte quantos alunos obtiveram nota acima
da média. Esse procedimento deve exibir a média e o resultado da contagem. Faça um programa
(main) que declare e preencha as devidas o vetor com valores digitados e acione os
procedimentos.*/

void preencheNotas(int tam, int vetor[]) {
    for (int i = 0; i < tam; i++) {
        printf("Digite a nota:");
        scanf("%d", vetor[i]);

    }

    // return
}

void calculaMedia(int tam, int vetor[]) {
    for (int i = 0; i < tam; i++) {
          
    }
    

}

int main() {
    int v[10], t[10];
    preencheNotas(10, v);

    calculaMedia(10, t);

    return 0;
}