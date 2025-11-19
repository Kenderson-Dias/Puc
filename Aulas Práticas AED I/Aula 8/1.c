#include <stdlib.h>
#include <stdio.h>
#define TAM 10

/*Crie um programa que receba dados de vários aluno
(Matricula e Nome) e armazene em um arquivo binário. Crie
no mesmo programa uma opção de ler dados de um
arquivo já armazenado dados de alunos*/

struct Aluno {
    int matricula;
    char nome[50];
};

int main(){
    FILE *p1;
    struct Aluno alunos[TAM];

    /* Leitura dos alunos */
    for (int i = 0; i < TAM; i++) {
        printf("\nInsira o nome do %d aluno: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        

        printf("Insira o numero de matricula: ");
        scanf("%d", &alunos[i].matricula);
        
    }

    p1 = fopen("lista.dat", "wb");
    if (p1 == NULL){
        perror("Erro ao abrir arquivo para escrita");
        return -1;
    }
    
    fwrite(alunos, sizeof(struct Aluno), TAM, p1);
    fclose(p1);

    p1 = fopen("lista.dat", "rb");
    if (p1 == NULL){
        perror("Erro ao abrir arquivo para leitura");
        return -2;
    }

    struct Aluno lidos[TAM];
    fread(lidos, sizeof(struct Aluno), TAM, p1);
    fclose(p1);

    for (int i = 0; i < TAM; i++) {
        printf("Aluno %d - Nome: %s\tMatricula: %d\n", i + 1, lidos[i].nome, lidos[i].matricula);
    }

    return 0;
}