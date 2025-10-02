#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um algoritmo que receba a nota de um aluno,
entre 0 e 100, e o nome de uma disciplina, depois exiba
uma mensagem na tela informando se ele foi aprovado ou
reprovado na disciplina. Para ser aprovado sua nota deve
ser >=60.*/

int main(){
    char disciplina[50];
    float nota;
    printf("Insira o nome da disciplina:\n");
    scanf("%[^\n]", &disciplina);
    printf("Insira a nota:\n");
    scanf("%f", &nota);
    fflush(stdin);
    if(nota > 59.4){
        printf("Voce foi aprovado em %s", disciplina);
    } else {
        printf("Voce foi reprovado em %s", disciplina);
    }

    return 0;
}