#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia a altura de 5 homens e 5 mulheres, e imprima a média de altura
masculina, feminina e geral*/

int main(){
    float altura, somaH = 0, somaM = 0, mediaH, mediaM, mediafinal;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("Digite a altura do homem %d: ", i);
        scanf("%f", &altura);
        somaH += altura;
    }

    for(i = 1; i <= 5; i++) {
        printf("Digite a altura da mulher %d: ", i);
        scanf("%f", &altura);
        somaM += altura;
    }

    mediaH = somaH / 5;
    mediaM = somaM / 5;
    mediafinal = (somaH + somaM) / 10;

    printf("Media de altura dos homens: %.2f\n", mediaH);
    printf("Media de altura das mulheres: %.2f\n", mediaM);
    printf("Media geral de altura: %.2f\n", mediafinal);

    return 0;
}