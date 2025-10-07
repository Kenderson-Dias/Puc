#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Implemente um procedimento que receba e preencha um vetor com as notas de uma
turma de 15 alunos. Depois, crie uma fun ̧c ̃ao que receba este vetor e retorne a maior nota. Crie
outro procedimento que receba o vetor e a maior nota, calcule e exiba a nota de cada aluno como
um percentual em rela ̧c ̃ao `a maior nota (Ex: se a maior nota for 10 e um aluno tirou 7, ele atingiu
70% da nota m ́axima).*/


/*Descrição: o procedimento permite o usuario preencher um vetor
Entrada: notas (float), tam (inteiro)
Saida: 
*/
void preencheNotas(float notas[], int tam){
    for (int i = 0; i < tam; i++) {
        printf("Insira a %da nota: ", i+1);
        scanf("%f", &notas[i]);
    }
    
}

/*Descrição: a função encontra a maior nota dentro do vetor
Entrada: notas (float), tam (inteiro)
Saida: float
*/
float encontraMaiorNota(float notas[], int tam){
    int maior = notas[0];
    for (int i = 1; i < tam; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

/*Descrição: o procedimento exibe o quanto equivale os valores (em %) do vetor usando de referencia a maior nota
Entrada: notas (float), tam (inteiro), maiorNota (float)
Saida: 
*/
void exibePercentuais(float notas[], int tam, float maiorNota){
    float percent;
    for (int i = 0; i < tam; i++) {
        percent = (notas[i] / maiorNota) * 100;
        printf("%.2f equivale a %.2f por cento\n",notas[i], percent);
    }
    
}

int main(){
    float n[15], big;
    int t = 15;
    preencheNotas(n, t);
    big = encontraMaiorNota(n, t);
    exibePercentuais(n, t, big);
}