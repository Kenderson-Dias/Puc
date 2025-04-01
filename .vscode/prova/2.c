#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int a = 1, c = 1, n, i = 1;

    printf("Digite um valor: ");
    scanf("%d", &n);

    while (i < n){
        a = a * 2;
        i = i * 2;
        printf("a = %d, i = %d\n", a, i);
    }
    for (i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c = c * 3; 
        }
        printf("c = %d\n", c);
    }
    return 0;
}