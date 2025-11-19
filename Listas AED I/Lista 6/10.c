#include <stdio.h>
#include <stdlib.h>

/*Amplie a struct Veículo adicionando o campo capacidade, que irá representar o número de
passageiros. Implemente um procedimento preencheCapacidade que preencha um vetor com 10
veículos, armazenando suas capacidades. Em seguida, faça um procedimento
copiaGrandesCapacidades que copie veículos com capacidade acima de 30 passageiros para um
novo vetor de até 10 elementos. Ao final, mostre o vetor resultante.*/

struct Veiculos {
    float quilometragem;
    int id;
    int capacidade;
} Veiculos;

void preencheCapacidade(Veiculos v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nVeiculo %d\nInsira o id: ", i + 1);
        scanf("%d", &v[i].id);
        printf("Insira a quilometragem: ");
        scanf("%f", &v[i].quilometragem);  
        printf("Insira a capacidade: ");
        scanf("%d", &v[i].capacidade);
    }
}

void copiaGrandesCapacidades (Veiculos g){
    int 
}


int main() {
    const int N = 10;
    Veiculos vet[N];
    Veiculos grandes[N];

    preencheCapacidade(vet, N);

    int cont = copiaGrandesCapacidades(vet, N, grandes, N, 30);
    mostraLista(grandes, cont);

    return 0;
}