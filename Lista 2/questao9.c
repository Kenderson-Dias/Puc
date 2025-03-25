#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um programa que leia quatro números inteiros positivos (w, x, y e z) e efetue o cálculo
de uma das seguintes médias de acordo com o valor de w*/

int main(){
    int w, x, y, z;
    float media;
    printf("Digite quatro numeros inteiros positivos: ");
    scanf("%d %d %d %d", &w, &x, &y, &z);

    // 1 - Geométrica
    if (w == 1){
        media = sqrt(x * y * z);

    // 2 - Ponderada
    } else if (w == 2){
        media = sqrt((x + 2 * y + z) / 6);

    // 3 - Harmônica
    } else if (w == 3){
        media = (3 / (1 / x + 1 / y + 1 / z));

    // 4 - Aritmética
    } else if (w == 4){
        media = (x + y + z) / 3;

    //Outros numeros
    } else
    {
        printf("Opcao invalida. Digite w como um numero entre 1 e 4\n");
        return 0;
    }

    printf("A media dos numeros foi de %.2f\n", media);
    return 0;
}