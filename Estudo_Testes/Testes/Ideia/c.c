#include <stdlib.h>
#include <stdio.h>

/*Escreva um programa que simule operações bancárias em uma conta. Seu
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
    int sl, d, c, sq;
    float taxa;
    printf(" 1. Saldo\n 2. Compra no credito\n 3. Deposito\n 4. Saque\n 5. Sair\n");
    printf("Digite seu saldo: ");
    scanf("%d", &sl);
    //Verifica se o saldo é negativo
    if(sl < 0){
        printf("Saldo invalido\n");
        return 0;
    }
    do{
        //Escolhe a operação
        printf("Digite o numero da operação: ");
        scanf("%d", &c);
        switch(c){
            //Mostra do saldo atual
            case 1:
                printf("Seu saldo e: %d\n", sl);
                break;
            //Compra no crédito realizada
            case 2:
                printf("Digite o valor da compra: ");
                scanf("%d", &d);
                if(d < 200){
                    taxa = 3.60;
                }else if(d >= 200 && d <= 1200){
                    taxa = (d * 0.7) / 100;
                }else{
                    taxa = (d * 1.3) / 100;
                }
                sl -= (d + taxa);
                break;
            //Depósito
            case 3:
                printf("Digite o valor do deposito: ");
                scanf("%d", &sq);
                sl += sq;
                break;
            //Saque
            case 4:
                printf("Digite o valor do saque: ");
                scanf("%d", &sq);
                //Verifica se o saldo é insuficiente
                if(sq + 3.70 > sl){
                    printf("Saldo insuficiente\n");
                    break;
                }
                //Retira o valor do saque do saldo
                sl -= (sq + 3.70);
                break;
            default:
                printf("Operacao invalida\n");
        }



}