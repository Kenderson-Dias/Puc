#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que calcule a amplitude total (AT) de uma série de cinco números. A
amplitude e definida pela diferença entre o menor e o maior número.*/

int main(){
    int x,y, z, w, v, maior, menor, AT;

    printf("Digite 5 numeros reais: ");
    scanf("%d %d %d %d %d", &x, &y, &z, &w, &v);

    //maior
    if (x > y && x > z && x > w && x > v)
    {
        maior = x;   
    }
    else if (y > x && y > z && y > w && y > v)
    {
        maior = y;
    }
    else if (z > x && z > y && z > w && z > v)
    {
        maior = z;
    }
    else if (w > x && w > y && w > z && w > v)
    {
        maior = w;
    }
    else if (v > x && v > y && v > z && v > w)
    {
        maior = v;
    }

    //menor
    if (x < y && x < z && x < w && x < v)
    {
        menor = x;
    }
    else if (y < x && y < z && y < w && y < v)
    {
        menor = y;
    }
    else if (z < x && z < y && z < w && z < v)
    {
        menor = z;
    }
    else if (w < x && w < y && w < z && w < v)
    {
        menor = w;
    }
    else if (v < x && v < y && v < z && v < w)
    {
        menor = v;
    }

    //AT
    AT = maior - menor;
    
    printf("A amplitude total e %d\n", AT);

    return 0;
}