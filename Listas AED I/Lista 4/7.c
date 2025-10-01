#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Implemente um programa em C que leia dois inteiros, armazenando-os em variáveis. O
programa deve comparar os endereços das variáveis e exibir o maior deles.   */

int main() {
    int a, b, *p1, *p2;
    printf("Insira o valor de dua variaveis: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (p1 > p2) {
        printf("%p", p1);
    } else {
        printf("%p", p2);
    }
    
}