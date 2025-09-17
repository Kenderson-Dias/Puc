#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa para imprimir um padrão de asteriscos (*) na forma de
um triângulo retângulo. O programa deve receber um número inteiro n como entrada e
imprimir n linhas de asteriscos, sendo que a primeira linha possui um asterisco, a segunda
linha possui dois, e assim por diante até n.*/

int main() {
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Valor invalido");
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}