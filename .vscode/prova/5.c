#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int ast, n;
    printf ("Digite um valor: ");
    scanf ("%d", &n);

    if (n <= 0)
    {
        printf ("Valor invalido");
    } else { 
        for (int cont = 0; cont <= n ; cont--){
            for (ast = cont; ast > 0; ast --){
                printf ("*");
            }
          
        }
    }

    return 0;
    
}