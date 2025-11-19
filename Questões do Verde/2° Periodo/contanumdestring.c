#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
    char stg[100];
    int num = 0;
    scanf("%s", &stg);
    for (int i = 0; i != '\0'; i++) {
        if (isdigit(stg[i])) {
            num++;
        }
    }
    printf("%d\n", num);
}