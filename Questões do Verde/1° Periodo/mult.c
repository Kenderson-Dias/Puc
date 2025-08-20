#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    //Num1
    if(num1 % 3 == 0 && num1 % 5 == 0){
        printf("Divisível por ambos\n");
    } else if (num1 % 3 != 0 && num1 % 5 == 0)
    {
        printf("Divisível por 5\n");
    } else if (num1 % 3 == 0 && num1 % 5 != 0)
    {
        printf("Divisível por 3\n");
    } else {
        printf("Não é divisível por 3 nem por 5\n");
    }
    
    //Num2
    if(num2 % 3 == 0 && num2 % 5 == 0){
        printf("Divisível por ambos\n");
    } else if (num2 % 3 != 0 && num2 % 5 == 0)
    {
        printf("Divisível por 5\n");
    } else if (num2 % 3 == 0 && num2 % 5 != 0)
    {
        printf("Divisível por 3\n");
    } else {
        printf("Não é divisível por 3 nem por 5\n");
    }

    //Num3 
    if(num3 % 3 == 0 && num3 % 5 == 0){
        printf("Divisível por ambos");
    } else if (num3 % 3 != 0 && num3 % 5 == 0)
    {
        printf("Divisível por 5");
    } else if (num3 % 3 == 0 && num3 % 5 != 0)
    {
        printf("Divisível por 3");
    } else {
        printf("Não é divisível por 3 nem por 5");
    }


}