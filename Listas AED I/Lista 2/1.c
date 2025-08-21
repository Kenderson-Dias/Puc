#include <stdio.h>
#include <stdlib.h>

/*Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números.*/

int main(){
    float x, y, z;
    printf("Insira tres numeros:\n");
    scanf("%f %f %f", &x, &y, &z);
    fflush(stdin);

    if(x >= y && y >= z){
       
    } else if(x >= z && z >= y) {
        
    } else if(y >= x && x >= z) {
        
    } else if(y >= z && z >= x) {
    
    } else if(y >= z && z >= x) {
    
    } else if(y >= z && z >= x) {
    
    }
    return 0;
}