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
        printf("Digite a nota: ");
        scanf("%d", &vetor[i]);

    }

}

void calculaMedia(int tam, int vetor[]) {
    float med=0;
    int i=0;

    for (i = 0; i < tam; i++) {
        med += vetor[i];
    }
    med /= tam;

    //Mostra a media
    printf("A media da turma e: %.2f\n", med);

    //Mostra quantos alunos tiveram nota acima da media
    for (i = 0; i < tam; i++) {
        if (vetor[i] > med) {
            printf("Aluno %d obteve nota acima da media\n", i + 1);
        }
    }
}

int main() {
    int v[10];
    
    //Chama o procedimento para prencher os vetores
    preencheNotas(10, v);

    //Chama o procedimento para calcular a media
    calculaMedia(10, v);

    //Exibe os vetores criados
    printf("Notas: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}