
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
    int n = 0;
    scanf("%d", &n);

    char palavras[100][101];

    int tam = 0;
    int lex = 0;


    for(int i = 0; i < n; i++){
        scanf("%s", palavras[i]);
    }

    for(int i = 1; i < n; i++){
        if(strlen(palavras[i]) > strlen(palavras[tam])){
            tam = i;
        }
        if(strcmp(palavras[i], palavras[lex]) > 0){
            lex = i;
        }
    }

    printf("%s\n", palavras[tam]);
    printf("%s\n", palavras[lex]);

    return 0;
}