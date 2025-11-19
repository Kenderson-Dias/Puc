#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que crie um vetor para armazenar 5 veículos (struct) e oferece ao usuário
funcionalidades para:
a) Procurar o veículo com a maior quilometragem.
b) Troque o veículo com a maior quilometragem com o da primeira posição.
c) Imprima a lista de quilometragens após a troca.
Cada uma dessas etapas deve ser implementada em funções ou procedimentos separados.*/

struct Veiculos {
    float quilometragem;
    int id;
};

int maiorKm(struct Veiculos k[], int size) {
    int pos = 0;
    for (int j = 1; j < size; j++) {
        if (k[j].quilometragem > k[pos].quilometragem) pos = j;
    }
    return pos;
}

void mostraLista(struct Veiculos h[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Veiculo %d\n Id: %d\tQuilometragem: %.2f\n", i + 1, h[i].id, h[i].quilometragem);
    }
}

void trocaPosition(struct Veiculos d[], int size, int pts) {
    if (pts != 0 && pts >= 0 && pts < size) {
        struct Veiculos temp = d[0];
        d[0] = d[pts];
        d[pts] = temp;
    }
    mostraLista(d, size);
}

int main() {
    int opt, i, idx = 0;
    const int SIZE = 5;
    struct Veiculos v[SIZE];

    for (i = 0; i < SIZE; i++) {
        printf("\nVeiculo %d\nInsira o id: ", i + 1);
        scanf("%d", &v[i].id);
        printf("Insira a quilometragem: ");
        scanf("%f", &v[i].quilometragem);  
    }

    do {
        printf("\n---Menu de Veiculos---\n1. Veiculo com maior quilometragem\n2. Trocar posicao do veiculo com maior quilometragem\n0. Encerrar Programa\nEscolha: ");
        if (scanf("%d", &opt) != 1) { while (getchar() != '\n'); opt = -1; }
        switch (opt) {
            case 1:
                idx = maiorKm(v, SIZE);
                printf("O veiculo com maior quilometragem eh o %d, com %.2f km rodados\n", v[idx].id, v[idx].quilometragem);
                break;
            case 2:
                idx = maiorKm(v, SIZE);
                trocaPosition(v, SIZE, idx);
                break;
            case 0:
                printf("Programa encerrado\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opt != 0); // corrigido de (opt =! 0);
    
}