#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


/*
Este procedimento realiza os comandos necessários para a resolução do
exercício 1.
*/
void exercicio1 () {
    //presente o que será exibido após a execução do código a seguir:
    int a = 7, b = 3, c;
    float x;
    bool y;
    c = (a + b) * 2 - 5;
    x = (a > b) ? (a / (float)b) : (b / (float)a);
    y = (c % 2 == 0);
    if (y == true)  
        printf ("Resultado 1: %d\n", c + (int)x);
    else
        printf ("Resultado 2: %d\n", c-- + (int)x);
    //Resultado 2: 17
}


/*
Este procedimento realiza os comandos necessários para a resolução do
exercício 2.
*/
void exercicio2 () {
    /*Calcule e indique quantas operações de subtrações são realizadas em função de
    𝑛 no código a seguir*/
    for(i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            k--;
        }
    }
    //n² - n
    for (i = 1; i < n; i * 2) {
        for (j = 0; j < n; j++) {
            x--;
        }
    }
    //n * ln n + 1
}


/*
Este procedimento realiza os comandos necessários para a resolução do
exercício 3.
*/
void exercicio3 () {
    /*Escreva um programa em C que simule o lançamento de um dado de 6 faces
    100 vezes e conte quantas vezes cada face foi sorteada. Utilize função de geração de números
    aleatórios para sortear as faces.*/
    srand(NULL);
    int d1, d2, d3, d4, d5, d6, cont;
    d1 = d2 = d3 = d4 = d5 = d6 = 0;
    for (int i = 0; i < 100; i++) {
        cont = (rand % 5) + 1;
        if (cont == 1) {
            d1++;
        } else if (cont == 2) {
            d2++;
        } else if (cont == 3) {
            d3++;
        } else if (cont == 4) {
            d4++;
        } else if (cont == 5) {
            d5++;
        } else {
            d6++;
        }
    }
    printf("Lado\tVezes\n1\t%d\n2\t%d\n3\t%d\n4\t%d\n5\t%d\n6\t%d", d1, d2, d3, d4, d5, d6);
} 


/*
Este procedimento realiza os comandos necessários para a resolução do
exercício 4.
*/
void exercicio4 () {
    /*Escreva um programa em C que leia um número inteiro positivo digitado pelo
    usuário e exiba este número escrito de forma reversa*/
    int num, inverso;
    printf("Insira um inteiro: ");
    scanf("%d", &num);
    if (num <= 0) {
        inverso = num;
        do {
            inverso %= 10;
            printf("%d", inverso);
        } while (inverso != 0);
        
    } else {
        printf("Valor invalido");
    }
}


/*
Este procedimento realiza os comandos necessários para a resolução do
exercício 5.
*/
void exercicio5 () {
    /*Posto de combustível – Escreva um programa em C que simule o abastecimento
    de veículos. O usuário informa quantos litros deseja abastecer e a distância percorrida desde
    o último abastecimento em quilômetros. O programa repete até que seja abastecido um total
    superior a 200 litros. Ao final, exiba o valor arrecadado (cada litro custa R$ 6,00) e o consumo
    médio do veículo (km / litros abastecidos).*/
    float litros, dist, contlit, contkm, preco;
    contlit = contkm = 0;
    do {
       printf("Quantos litros deseja: ");
       scanf("%f", &litros);
       printf("Quantos km desde o ultimo abastecimento: ");
       scanf("%f", &dist);
       if (litros > 0 && dist > 0) {
        contlit += litros;
        preco += litros * 6;
        contkm += dist;
       } else {
        printf("Valor invalido");
       }
       
    } while (contlit <= 200);

    printf("Arrecadado: R$%.2f\nConsumo medio: %.2f km/litro", preco, contkm / contlit);
    
}

int main() {
    int opcao;
    do {

        printf("\nMenu de Exercicios!\n");
        printf("1 - Exercicio 1 \n");
        printf("2 - Exercicio 2 \n");
        printf("3 - Exercício 3 \n");
        printf("4 - Exercício 4 \n");
        printf("5 - Exercício 5\n");
        printf("0 - Sair \n");
        printf("Digite um número da opção acima: \n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
        // chama o procedimento relacionado ao exercício 1
            exercicio1();
            break;
        case 2:
        // chama o procedimento relacionado ao exercício 2
            exercicio2();
            break;
        case 3:
        // chama o procedimento relacionado ao exercício 3
            exercicio3();
            break;
        case 4:
        // chama o procedimento relacionado ao exercício 4
            exercicio4();
            break;
        case 5:
        // chama o procedimento relacionado ao exercício 5
            exercicio5();
            break;
        case 0: // Sair
            printf("\nAté logo\n!");
			break;

        default:
            printf("Opcao invalida");
            break;
        }

    } while (opcao != 0);
}