#include <stdlib.h>
#include <stdio.h>

int main(){
    int qtd;
    
    
    printf("Digite quantos nomes você quer armazenar: ");
    scanf("%d", &qtd);
    
    char **nomes = malloc(qtd * sizeof(char *)); 

    for(int i = 0; i < qtd; i++){
        printf("Digite um nome: \n");
        nomes[i] = malloc(50 * sizeof(char));
        scanf("%s", nomes[i]);
    }
    for(int i = 0; i < qtd; i++){
        printf("O %d° nome é: %s\n",i + 1, nomes[i]);
    }
    free(nomes);
    return 0;
}