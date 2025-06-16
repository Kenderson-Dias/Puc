#include <stdio.h>
#include <string.h>
#include <ctype.h>


int compara_palavra(const char *a, const char *b) {
    while (*a && *b) {
        if (tolower(*a) != tolower(*b)) return 0;
        a++; b++;
    }
    return *a == '\0' && *b == '\0';
}


int contem_palavra(const char *linha, const char *alvo) {
    int tam_alvo = strlen(alvo);
    int tam_linha = strlen(linha);
    for (int i = 0; i <= tam_linha - tam_alvo; i++) {

        if ((i == 0 || !isalpha(linha[i-1])) &&
            compara_palavra(&linha[i], alvo) &&
            !isalpha(linha[i+tam_alvo])) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, cont = 0;
    char alvo[100];
    char linhas[100][100];

    scanf("%d", &n);
    getchar();

    fgets(alvo, 100, stdin);
    alvo[strcspn(alvo, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        fgets(linhas[i], 100, stdin);
        linhas[i][strcspn(linhas[i], "\n")] = '\0';
    }


    for (int i = 0; i < n; i++) {
        if (contem_palavra(linhas[i], alvo)) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}