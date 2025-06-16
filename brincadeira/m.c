#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50]
    int idade
    float nota
};


int main(){
    int cap;
    int n = 0;
    char opcao;

    printf("Quantos alunos voce ira cadastrar: ");
    scanf("%d", & cap);

    Aluno *x = malloc(cap * sizeof(Aluno));

    do{
        printf("Digite o nome de um aluno: ");
        getchar()
    }
}