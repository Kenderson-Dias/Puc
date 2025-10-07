#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Implemente a função abaixo, que receba uma string como parâmetro e crie dinamicamente
(malloc) uma nova string que seja a versão invertida da original. A função deve retornar o ponteiro
para essa nova string. Crie um main para testar a função e imprimir o resultado*/


/*Descrição: a função inverte a ordem dos caracteres de uma string
Entrada: *original[] (cont char)
Saida: char* 
*/
char* inverteString(const char *original){
    int len = strlen(original);
    char *invertida = (char*)malloc((len + 1) * sizeof(char));
    for(int i = 0; i < len; i++){
        invertida[i] = original[len - 1 - i];
    }
    invertida[len] = '\0';
    return invertida;
}

int main(){
    char origin[51];
    printf("\tDigite sua frase (ate 50 caracteres)\n");
    fgets(origin, sizeof(origin), stdin);
    origin[strcspn(origin, "\n")] = '\0'; // Remove o \n do final, se houver

    char *caos = inverteString(origin);

    printf("\n%s\n", caos);
    free(caos);
    
    return 0;
}