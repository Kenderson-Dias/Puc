<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
#include <stdlib.h>
#include <stdio.h>
>>>>>>> 9c1f5081f0fde7f2cb2e2f64fa1e816c9a50f889

/*Crie um algoritmo que leia 3 números reais e mostre o maior, o menor e indique o elemento
do meio dentre os três números.*/

<<<<<<< HEAD
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
=======
int main() {
    float a, b, c, maior, menor, meio;

    printf("Digite tres numeros reais: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    
    if ((a != maior) && (a != menor)){
        meio = a;
    } else if ((b != maior) && (b != menor)){
        meio = b;
    } else {
        meio = c;
    }
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Do meio: %.2f\n", meio);

>>>>>>> 9c1f5081f0fde7f2cb2e2f64fa1e816c9a50f889
    return 0;
}