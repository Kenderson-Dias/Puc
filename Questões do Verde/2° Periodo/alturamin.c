#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, h, cont = 0, alt;
    scanf("%d %d", &n, &h);
    if (n < 1 || n > 6 || h < 90 || h > 200) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &alt);
        if (alt <= h) {
            cont++;
        }
    }
    printf("%d", cont);
    
}