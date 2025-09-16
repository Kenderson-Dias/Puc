#include <stdlib.h>
#include <stdio.h>

/*Apresente o que será exibido após a execução do código a seguir:
Responda: 
a) Quantas vezes o corpo do laço enquanto/while será executado?
b) Quais serão os valores de
x e y mediatamente após a
saída desse laço?*/

int main(){
    int x, y;
    x = 2;
    y = 13;
    while (x < y) {
        x += 1;
        y -= 1;
    }
}
//a) 6 vezes
//b) x = 8 y =7