#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char P[100];
    char A[100];
    scanf("%[^\n]",&P);
    strcpy(A,P);
    printf("%c", A);
}