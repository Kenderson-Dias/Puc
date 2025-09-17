#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Apresente o que será exibido após a execução do código a seguir:*/

int main() {
    int x, y, z;
    x = y = z = 8;
    printf("1. %d %d %d\n", x, y, z);
    y = pow (y, 3);
    printf("2. %d\n", y);
    x--;
    printf("3. %d\n", x);
    y = z--;
    printf("4. %d %d\n", y, z);
    z = --y;
    printf("5. %d %d\n", z, y);
    z -= 2;
    printf("6. %d\n", z);
    y = (x>z?x:z);
    printf("7. %d\n", y);
    if(z < x)
        printf("%d %d %d %d", x-1, y, z, 1*1);
    else
        printf("%d %d %d %d", 1*1, z, y, x-2);
}
// 6 7 5 1