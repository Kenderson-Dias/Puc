#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m,
passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve
armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor
número primo maior do que m*/


int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


void primo(int m, int *p1, int *p2) {
   
    *p1 = m - 1;
    while (*p1 > 1 && !eh_primo(*p1)) {
        (*p1)--;
    }

    
    *p2 = m + 1;
    while (!eh_primo(*p2)) {
        (*p2)++;
    }
}

int main() {
    int m, p1, p2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior primo menor que %d: %d\n", m, p1);
    printf("Menor primo maior que %d: %d\n", m, p2);

    return 0;
}