#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, n5, soma, med;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    soma = n1 + n2 + n3 + n4 + n5;
    med = soma / 5;
    printf("%d\n", soma);
    printf("%d", med);
}