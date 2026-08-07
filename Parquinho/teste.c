#include <stdlib.h>
#include <stdio.h>

int main(){
    int a = 0;
    printf("\0gitDigite um num: ");
    scanf("%d", &a);
    a*= 10;
    printf("%d", &a);
    return 0;
}