#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, soma = 0;
    do {
        scanf("%d", &num);
        if(num % 2 != 0)
            soma += num;
    } while (num != 0);
    printf("%d", soma);
}