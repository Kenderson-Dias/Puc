#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char stg[100];
    int i, j, tam, pali;
    do {
       scanf("%s", stg);
       tam = strlen(stg);
       for (i = 0; i < tam; i++) {
        for (j = tam; j > 0; j--) {
            if (stg[i] == stg[j]) {
                pali = 1;
            } else {
                pali = 0;
            }
            
        }
        
       }
       if (pali == 1) {
        printf("SIM");
       } else {
        printf("NAO");
       }
       
        
    } while (stg != 'FIM');
    
}