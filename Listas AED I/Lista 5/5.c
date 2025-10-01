#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Crie uma função que recebe uma string representando uma URL simples (ex:
https://www.pucminas.br) e verifica se ela começa com "http://" ou "https://". Se começar,
a função deve retornar o ”corpo” principal da URL (neste caso, www.pucminas.br). Caso contrário,
deve retornar uma string vazia. Implemente um main que teste a função e imprima o resultado*/

void corpo_url(const char *url, char *corpo) {
    if (strncmp(url, "http://", 7) == 0) {
        strcpy(corpo, url + 7);
    } else if (strncmp(url, "https://", 8) == 0) {
        strcpy(corpo, url + 8);
    } else {
        corpo[0] = '\0';
    }
}

int main() {
    char url[100], corpo[100];
    printf("Digite a URL: ");
    fgets(url, sizeof(url), stdin);
    url[strcspn(url, "\n")] = '\0';

    corpo_url(url, corpo);

    if (strlen(corpo) > 0) {
        printf("%s\n", corpo);
    } else {
        printf("URL invalida ou sem http(s)://\n");
    }

    return 0;
}