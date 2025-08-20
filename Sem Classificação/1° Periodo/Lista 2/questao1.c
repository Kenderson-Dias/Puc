#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números*/

int main(){
    int x,y, z;

    printf("Digite 3 numeros reais: ");
    scanf("%d %d %d", &x, &y, &z);

    //maior 
    if(x > y && x > z){
        printf("O maior numero e %d\n", x);
    }
    else if(y > x && y > z){
        printf("O maior numero e %d\n", y);
    }
    else if(z > x && z > y){
        printf("O maior numero e %d\n", z);
    }

    //menor
    if (x < y && x < z) {
        printf("O menor numero e %d\n", x);
    }
    else if (y < x && y < z) {
        printf("O menor numero e %d\n", y);
    }
    else if (z < x && z < y) {
        printf("O menor numero e %d\n", z);
    }

    
    //meio
    if (x < y && x > z || x > y && x < z) {
        printf("O numero do meio e %d\n", x);
    }
    else if (y < x && y > z || y > x && y < z) {
        printf("O numero do meio e %d\n", y);
    }
    else if (z < x && z > y || z > x && z < y) {
        printf("O numero do meio e %d\n", z);
    }

    return 0;
}