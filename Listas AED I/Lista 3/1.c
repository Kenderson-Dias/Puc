#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Codifique o algoritmo abaixo em C e escreva na tela do monitor o valor de x ao final da
execução*/
/*Codifique o algoritmo abaixo em C e escreva na tela do monitor o valor de x ao final da
execução*/

int main(){
    int r, x = 1, y = 12, z = 0;
    while (z < 5) {
        r = y % 3;
        if (r == 0) 
            x += 2;
        y += 5;
        z += 1;
    }
    printf("%d", x);
    int r, x, y, z;
    x = 1;
    y = 12;
    z = 0;
    while (z < 5) {
        r = y % 3;
        if (r == 0)
            x = x + 2;
        y = y + 5;
        z = z + 1; 
    }
    printf("%d", x);
}