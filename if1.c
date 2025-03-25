#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Desenvolva um algoritmo que receba a nota de um aluno,
entre 0 e 100, e o nome de uma disciplina, depois exiba
uma mensagem na tela informando se ele foi aprovado ou
reprovado na disciplina. Para ser aprovado sua nota deve
ser >=60.*/

int main()
{ 
    //Declara
    float nota;
    char disciplina;
    //Deixa o usuario atribuir as variaveis
    printf("Digite a disciplina e a sua nota");
    scanf("%c, %f", &disciplina, &nota);

    //Insere condições 
    if(nota < 60) {
        printf("/nAluno reprovado em %c");
    }
    //Insere condições
    if(nota >= 60){
        printf("/nAluno aprovado em %c");
    }

    return 0;
}