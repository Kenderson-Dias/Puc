#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*Escreva um procedimento que receba 3 notas de um aluno por parâmetro e uma letra. Se a
letra for "A", o procedimento calcula e escreve a média aritmética das notas do aluno, se for
"P", calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Escreva também um programa
main que leia 3 notas de n alunos e acione o procedimento para cada aluno.*/

void media (float n1, float n2, float n3, char l){
    float nt;
    if (l == 'P'){
        nt = (n1*5 + n2*3 + n3*2) / 10;
        printf ("%f\n", nt);
    } else if (l == 'A'){
        nt = (n1 + n2 + n3) / 3;
        printf ("%f\n", nt);
    } else {
        printf ("Invalido\n");
    }
}

int main(){
    float num1, num2, num3, res;
    int numl;
    char op;
    printf ("Digite o numero de alunos: ");
    scanf ("%d", &numl);

    do 
    {
        printf ("Digite suas notas: ");
        scanf ("%f %f %f", &num1, &num2, &num3);
        printf ("Escolha\n (A)- Aritmetica\n (P)- Ponderada\n");
        scanf (" %c", &op);
        fflush (stdin);
        media (num1, num2, num3, op);
        
    } while (numl != 0);{
        numl--;
        }

    return 0;
}