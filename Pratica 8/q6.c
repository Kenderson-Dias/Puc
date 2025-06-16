#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*Crie um procedimento que recebe um vetor de caracteres. Esse procedimento deverá contar o
número de palavras que são repetidas no texto e imprima a contagem de cada palavra repetida
juntamente com sua frequência. Implemente o mais que solicita ao usuário o texto e chame o
procedimento passando o vetor de caracteres.*/



//Função q conta palavras
int contaPalavra (char txt[]){
    int i, tam = strlen(txt), cont = 1;

    for(i = 0; i < tam; i++){

        if(txt[i] == ' ')  //Compara se a posição 'i' do vetor é um espaço
            cont++;       //se for conta uma palavra
    }

    return cont;        //Resultado da contagem (o que a função retorna)
}

char palavrasGuarda (char mosaico[]) {
    int cont = contaPalavra(mosaico);
    char **guarda = (char **) malloc(sizeof(char*) * cont);
    for (int i = 0; i < cont; i++){

        guarda[i] = (char*) malloc(sizeof(char) * 50);
    }
    
}

int tesTe (int tamvet){
    int *v = (int *) malloc(sizeof(int) * tamvet);
    for (int i = 0; i < tamvet; i++)
    {
        v[i] = i*9;

        printf("%d\n", v[i]);
    }
    
}

int main() {
    char texto[50];
    int num, rep, teste;

    printf("Digite seu texto:\n* ");
    scanf("%[^\n]", &texto); 

    num = contaPalavra(texto);
    rep = tesTe(100);

    printf("%d palavras\n", num);
    printf("%d", rep);

    return 0;
}

