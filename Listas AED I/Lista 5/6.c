#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Crie um procedimento que recebe um texto (vetor de caracteres). Esse procedimento
dever ́a encontrar e exibir qual foi o caractere (letra) que apareceu com mais frequˆencia no texto,
ignorando a diferen ̧ca entre mai ́usculas e min ́usculas e desconsiderando espa ̧cos*/


/*Descrição: o procedimento conta e printa qual a letra que mais se repete
Entrada: vet[] (char)
Saida:
*/
void contaLetra(char vet[]) {
    int txt[26] = {0};  
    int i = 0;

    
    while (vet[i] != '\0') {
        if (isalpha(vet[i])) { 
            char c = tolower(vet[i]); 
            txt[c - 'a']++; 
        }
        i++;
    }

    
    int max = 0;
    int letra = 0;
    for (i = 0; i < 26; i++) {
        if (txt[i] > max) {
            max = txt[i];
            letra = i;
        }
    }

    printf("\nA letra mais usada foi '%c', aparecendo %d vezes.\n", letra + 'a', max);
}

int main() {
    char texto[500];

    printf("---Digite seu texto---\n");
    /*scanf("%^[\0]");
    fflush(stdin);*/
    fgets(texto, sizeof(texto), stdin);

    contaLetra(texto);

    return 0;
}