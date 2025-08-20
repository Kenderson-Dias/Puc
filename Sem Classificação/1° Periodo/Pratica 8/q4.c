#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*Peça ao usuário que crie uma senha. Utilize um para armazenar a senha. Valide se a senha
atende aos critérios de segurança, como ter pelo menos 8 caracteres, conter pelo menos uma
letra maiúscula, uma letra minúscula, um número e um caractere especial. Imprima se a senha é
válida ou não.*/

int main() {
    char senha [100];

    int n = 0, especiais = 0, let1 = 0, let2 = 0, num = 0;

    printf("Digite a senha: ");
    scanf("%s", senha);

    //ajusta o tamanho da senha
    n = strlen(senha);

    //Verifica se a senha tem 8 caracteres
    if (n < 8) {
        printf("Senha invalida\n");
        return -1;
    }

    //Verifica se a senha tem letras maiusculas
    for (int i = 0; i < n; i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            let1 = 1;
            break;
        }
    }

    //Verifica se a senha tem letras minusculas
    for (int i = 0; i < n; i++) {
        if (senha[i] >= 'a' && senha[i] <= 'z') {
            let2 = 1;
            break;
        }
    }

    //Verifica se a senha tem numeros
    for (int i = 0; i < n; i++) {
        if (senha[i] >= '0' && senha[i] <= '9') {
            num = 1;
            break;
        }
    }

    //Verifica se a senha tem caracteres especiais
    for (int i = 0; i < n; i++){
        if (senha[i] == '!' || senha[i] == '@' || senha[i] == '#' || senha[i] == '$' ||
             senha[i] == '%' || senha[i] == '^' || senha[i] == '&' || senha[i] == '*' ||
             senha[i] == '(' || senha[i] == ')' || senha[i] == '-' || senha[i] == '_' ||
             senha[i] == '+' || senha[i] == '=') {
            especiais = 1;
            break;
        }
        
        
    }
    
    //Junta tudo e verifica
    if (let1 == 1 && let2 == 1 && num == 1 && especiais == 1) {
        printf("Senha valida\n");
    } else {
        printf("Senha invalida\n");
    }

    return 0;

}

/*senha[i] >= 'A' && senha[i] <= 'Z'
Por incrivel q pareça (pra mim) isso realmente funciona*/

/*favor: não me peça pra verificar caracteres especiais nunca mais ou pelo menos
ensina uma forma facil*/