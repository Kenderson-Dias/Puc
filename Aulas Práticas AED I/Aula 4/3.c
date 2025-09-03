#include <stdlib.h>
#include <stdio.h>

/*Crie uma algoritmo que mostre os números ímpares entre 1 e 9*/

int main() {
    int n = 1;
    while (n < 10) {
        if(n % 2 != 0)
            printf("%d\n", n);
        n++;
    }
    return 0;
}