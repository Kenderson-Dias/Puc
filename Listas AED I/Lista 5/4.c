#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Pe ̧ca ao usu ́ario que crie um nome de usu ́ario e armazene-o em um vetor de caracteres.
Crie uma fun ̧c ̃ao que valide se o nome de usu ́ario atende aos seguintes crit ́erios:
• Ter entre 5 e 15 caracteres.
• Conter apenas letras (mai ́usculas ou min ́usculas), n ́umeros e o caractere (underscore).
• Deve obrigatoriamente come ̧car com uma letra.
A fun ̧c ̃ao deve retornar 1 se o nome for v ́alido e 0 caso contr ́ario. Imprima o resultado da valida ̧c ̃ao*/


/*Descrição: a função verifica se o nome de usuario escolhido cumpre os requisitos
Entrada: v[] (char)
Saida: inteiro
*/
int verifica (char v[]){
    if (strlen (v) < 5 || strlen (v) > 15) 
        return 0;
    if (!isalpha(v[0])) 
        return 0;

    for (int i = 0; i < strlen(v); i++) {
        if (!isalnum(v[i]) && v[i] != '_');
            return 0;
    }
    return 1;
}

int main(){
    char senha[20];
    int out;
    printf("A senha deve ter:\n*Entre 5 e 15 caracteres\n*Deve conter apenas letras, numeros e o caractere'_'\n*Deve começar com uma letra\n");
    printf("Insira sua senha: ");
    scanf("%[^\n]");
    out = verifica(senha);
    if (out == 1) {
        printf("Senha valida");
    } else {
        printf("Senha invalida");
    }
    
}