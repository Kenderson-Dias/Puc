#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que encontre e mostre o menor número inteiro e positivo
que satisfaça, simultaneamente, às relações:
- Resto da divisão de N por 3 = 1
- Resto da divisão de N por 5 = 2
- Resto da divisão de N por 7 = 5*/

int main(){
    for (int i = 0; i < 100; i++) {
        if (i % 3 == 1 && i % 5 == 2 && i % 7 == 5) {
            printf("%d\t", i);
        }
    }
    
}