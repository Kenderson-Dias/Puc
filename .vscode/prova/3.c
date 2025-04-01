#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/*3) (5 pontos) Escreva um programa que simule operações bancárias em uma conta. Seu
programa deve oferecer um menu com as seguintes opções: 1. Saldo; 2. Compra no crédito;
3. Depósito; 4. Saque; 5. Sair. Ao iniciar o programa, a conta deve ter saldo zero e o saldo
nunca poderá ser negativo. Portanto, caso o valor de uma operação seja inválido, seu
programa deve exibir uma mensagem de erro e retornar ao menu. Para realizar saques e
compras no crédito, deve-se pagar taxas. Saques possuem taxa fixa de R$3,70, mas
compras no crédito possuem taxa variável conforme as seguintes condições:
• Compras menores que R$200,00 possuem taxa de R$3,60.
• Compras de R$200,00 até R$1200,00 possuem taxa de 0,7%.
• Compras superiores a R$1200,00 possuem taxa de 1,3%.
Observação: Para calcular um percentual A de um valor B, faça B*A/100
Rejeite valores de entrada inválidos*/

int main(){
    int sl = 0, c, d, sq;
    printf(" 1. Saldo\n 2. Compra no crédito\n 3. Depósito\n 4. Saque\n 5. Sair\n");

    
}