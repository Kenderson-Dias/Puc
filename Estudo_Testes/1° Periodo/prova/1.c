#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main (){
    int a = 3, b = 5, c = 7;

    a = (b > c) ? b++ : ++c;
    b = a++ + --c;
    c = (b % 2 == 0) ? ++a : b--;

    printf("a = %d, b = %d, c = %d", a, b, c);

    return 0;
} 