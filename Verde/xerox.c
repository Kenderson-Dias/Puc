#include <stdio.h>
#include <stdlib.h>

int main(){
    int copias;
    scanf("%d", &copias);
    float preco;

    //Tratamento
    if(copias <= 0){
        preco = copias;
        printf("%.2f", preco);
    } 
    //<=100
    if(copias <= 100 && copias > 0){
        preco = 0.25 * copias;
        printf("%.2f", preco);
    }
    //>100
    if(copias > 100){
        preco = 0.20 * copias;
        printf("%.2f", preco);
    }
}