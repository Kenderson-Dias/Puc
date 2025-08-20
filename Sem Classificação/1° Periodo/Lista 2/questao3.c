#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Uma empresa vende o mesmo produto para quatro estados diferentes. Cada estado possui
uma alíquota de imposto sobre o produto. Escreva um programa em que o usuário insira o valor
e a primeira letra do estado de destino do produto. O programa deve retornar o preço final
(produto + imposto). Se o estado não for válido, o sistema deve mostrar uma mensagem de erro.
Indique o estado pelo primeiro caractere da sigla.*/

int main(){
    float valor, precofinal;
    char estado;
    char m = 'm', s = 's', r = 'r', e = 'e';
    /*tava dando erro por causa do char, tive que declarar os char referentes aos estados como as 
    letras que representam os estados entre aspas simples.*/

    printf("Digite o valor do produto e a sigla do estado de destino: ");
    scanf("%f %c", &valor, &estado);

    if (estado == m)
    {
        precofinal = valor + (valor * 0.07);
        printf("O preco final do produto e %.2f", precofinal);
    }
    else if (estado == s)
    {
        precofinal = valor + (valor * 0.12);
        printf("O preco final do produto e %.2f", precofinal);
    }
    else if (estado == r)
    {
        precofinal = valor + (valor * 0.15);
        printf("O preco final do produto e %.2f", precofinal);
    }
    else if (estado == e)
    {
        precofinal = valor + (valor * 0.08);
        printf("O preco final do produto e %.2f", precofinal);
    }
    else
    {
        printf("Estado invalido");
    }
    
    return 0;
}
//Lembrete: usar aspas simples pra declarar char referente a uma letra.