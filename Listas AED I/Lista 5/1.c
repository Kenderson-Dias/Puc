#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Escreva um programa que preencha dois vetores de 10 posicoes com numeros inteiros
lidos do teclado. Em seguida, crie um terceiro vetor, onde cada elemento  ́e a soma dos elementos de
mesma posi ̧c ̃ao dos dois primeiros vetores. Crie procedimentos para preencher os vetores e uma fun ̧c ̃ao
para gerar o vetor resultante. Exiba o vetor com o resultado*/

/*Descrição: o procedimento permite o usuario preencher um veotr
Entrada: v[] (inteiro)
Saida: 
*/
void preenche(int v []) {
    for (int i = 0; i < 10; i++) {
        printf("Disite o %do inteiro: ", i +1);
        scanf("%d", &v[i]);
    }
    
}

/*Descrição: o procedimento soma os valores de mesma posição em dois vetores e os guarda em um novo vetor na mesma posição
Entrada: vet1[] (inteiro), vet2[] (inteiro), vet3[] (inteiro)
Saida: 
*/
void soma(int vet1[], int vet2[], int vet3[]) {
    for (int i = 0; i < 10; i++) {
        vet3[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int v1[10], v2[10], v3[10];
    preenche(v1);
    preenche(v2);
   
    soma(v1, v2, v3);
    for (int i = 0; i < 10; i++) {
        printf("Soma da %da posicao: %d\n", i + 1, v3[i]);
    }
    
}