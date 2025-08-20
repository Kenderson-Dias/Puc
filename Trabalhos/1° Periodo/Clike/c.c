#include <stdio.h>
#include <stdlib.h>

/*Uma sequência espelho trata-se de uma sequência que possui um número de início e um número de fim,
e todos os números entre estes, inclusive estes, são dispostos em uma sequência crescente, 
sem espaços e, em seguida, esta sequência é projetada de forma invertida, 
como um reflexo no espelho. Por exemplo, se a sequência for de 1 a 5, o resultado ficaria 1234554321;
 já se a sequência for de 7 a 12, o resultado ficaria 789101112211101987.*/

 int main(){
    
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    for (int i = n1; i <= n2; i++){
        printf ("%d", i);
    }

    for (int i = n2; i >= n1; i--){
        if (i > 9){
            printf ("%d%d",i % 10, i/10);
        } else {
            printf ("%d", i);
        }
    }

 }