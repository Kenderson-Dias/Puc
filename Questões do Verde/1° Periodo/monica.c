#include <stdio.h>
#include <stdlib.h>



int calcula (int f2, int f3){
    int idade = f2 + f3;
    return idade;    
}

void maior (int f1, int f2, int f3){
    int maior = f3;
    if (f1 > maior){
        maior = f1;
    }
    if (f2 > maior){
        maior = f2;
    }
    printf ("%d", maior);
}


int main(){
    int m = 0,a = 0,c = 0, d = 0;
    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &c);

    d = calcula(a, c);
    d = m - d;

    if(a == m || c == m)
        return 1;
    maior(a, c, d);
}