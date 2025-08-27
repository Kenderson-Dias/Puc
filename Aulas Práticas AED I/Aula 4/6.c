#include <stdlib.h>
#include <stdio.h>

/*Um certo material radioativo tem tempo de meia-vida de 50 segundos, 
ou seja, sua massa reduz-se à metade neste tempo. 
Crie um algoritmo que determine o tempo necessário para que sua massa se torne inferior a 0,5g, 
para um valor de massa qualquer informada pelo usuário. Apresente o tempo em horas, minutos e segundos*/

int main() {
    int hora = 0, minuto = 0, segundo = 0;
    float massa;
    printf("Insira a massa inicial: ");
    scanf("%f", &massa);
    if (massa < 0.5){
        printf("Insira um valor maior que 0.5");
    } else {
        while (massa != 0.5) {
            massa /= 2;
            segundo += 50;
            if (segundo >= 60){
                minuto += 1;
                segundo -= 60;
                if (minuto >= 60){
                    hora += 1;
                    minuto -= 60;
                }
            }
        }
    }
    printf("%d hora(s), %d minuto(s) e %d segundo(s)", &hora, &minuto, &segundo);
}