#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Escreva um programa que leia a altura de 5 homens e 5 mulheres, e imprima a média de altura
masculina, feminina e geral*/

int main(){
    float m, h, med1 = 0, med2 = 0;
    for(int i = 0; i < 5; i++) {
        printf("Insira a altura das mulheres: ");
        scanf("%f", &m);
        med1 += m;
    }
    for(int i = 0; i < 5; i++) {
        printf("Insira a altura dos homens: ");
        scanf("%f", &h);
        med2 += h;
    }
    med1 = med1 / 5;
    med2 = med2 /5;
    float med3 = (med1 + med2) / 2;
    printf("Media masculina = %.2f\nMedia feminina = %.2f\nMedia geral %.2f", med2, med1, med3);
}