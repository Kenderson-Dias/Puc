#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*Escreva um algoritmo que declare um número entre 1 e 20 e peça para o usuário adivinhar qual
é. A cada palpite o programa diz se o número foi mais alto ou mais baixo que o número correto.
Utilize a estrutura e repetição do-while*/

int main(){
    srand(NULL);
    int n;
    int a = rand () % 20;
    do
    {
        printf("\nInsira um valor de 1 a 20: ");
        scanf("%d", &n);
        if (n > a) {
            printf("O numero eh menor");
        } else if (n < a) {
            printf("O numero eh maior");
        } else {
            printf("Kbo a graca\nVoce acertou ^-^");
        }
        
        
    } while (n != a);
    
}