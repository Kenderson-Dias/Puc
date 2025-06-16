#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/*Crie uma função que recebe um vetor de caracter por parâmetro que representa um endereço
de e-mail para validar se o e-mail é válido. A função deverá retornar a posição do símbolo ‘@’. Se
o símbolo não estiver presente, então a função deverá retornar –1.
Implemente um main que peça ao usuário que insira um endereço de e-mail e depois chame a
função passando esse e-mail por parâmetro. Imprima se o endereço de e-mail é válido ou não.*/

void valida_mail(int tam, char mail[]){

    for (int i = 0; i < tam; i++)
        if (mail[i] == '@'){
            printf("%d", i);
        }
    
}

int main(){
    int n = 50;
    char email[50];

    printf("Digite seu e-mail abaixo:\n");
    scanf("%c", &email);

    valida_mail(n, email);

}