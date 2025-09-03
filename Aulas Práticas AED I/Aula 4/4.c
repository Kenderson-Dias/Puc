#include <stdlib.h>
#include <stdio.h>

/*Crie um algoritmo que mostre os número múltiplos de 3 e 5 entre 1 e 100*/

int main() {
    int n = 0;
    while (n <= 100)
    {
        if(n % 3 == 0 && n % 5 == 0)
            printf("%d\n", n);
        n++;
    }
    return 0;
}