#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que calcule e imprima a média dos n primeiros
números múltiplos de k, iniciando a partir de 1. Exemplo: se o usuário n=4 e k=5 então o
sistema deverá:
 Identificar os 4 primeiros números múltiplos de 5 a partir de 1: 1, 5, 10, 15.
 Calcular e mostrar a média: (1+5+10+15)/4 = 7,75
Os valores de n e k são informados pelo usuário. Os números devem ser inteiros e
positivos. Rejeite valores inválidos*/

int main(){
    int n, k, i, soma = 0, cont = 0;
    float m;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    //Caso os valores sejam negativos ou 0
    if(n <= 0 || k <= 0){
        printf("Valores invalidos\n");
        return 1;
    }
    //Guarda os múltiplos de k
    for(i = 1; cont < n; i++){
        if(i % k == 0){
            soma += i;
            cont++;
        }
    }
    //Calcula a média
    m = (float)soma / n;
    
    printf("A media dos %d primeiros numeros multiplos de %d e: %.2f\n", n, k, m);
    
    return 0;

    
}