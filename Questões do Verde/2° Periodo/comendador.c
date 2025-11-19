#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, soma = 0, *v, pos, big;
    scanf("%d", &n);
    v = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }
    if (soma > 100000) {
        exit(1);
    }
    big = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] > big) {
            pos = i;
        }
    }
    if (pos != 0) {
        printf("N");
    } else {
        printf("S");
    }
    
}