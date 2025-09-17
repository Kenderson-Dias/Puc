#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!*/

int main(){
    int n;
    float e = 1;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int fat = 1;
        for(int j = 1; j <= i; j++){
            fat *= j;
        }
        e += 1.0 / fat;
    }
    printf("O valor de E = %.2f", e);
}