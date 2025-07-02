#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP

#include <cmath> // Para sqrt e pow
#include "local.hpp"
#include "veiculo.hpp"
#include "pedido.hpp"


#define MAX_LOCAIS 100
#define MAX_VEICULOS 100
#define MAX_PEDIDOS 100




class Procedimentos {
public:
    Procedimentos();
    // Funções utilitárias
    float calcularDistancia(float x1, float y1, float x2, float y2);
    int buscarLocal(const char nomeLocal[]);
    void cadastrarLocal( char nomeLocal[], int coordenadaX, int coordenadaY);
    void listarLocais();
    void atualizarLocal(const char nomeLocal[]);
    void excluirLocal(const char nomeLocal[]);

    int buscarVeiculo(const char placa[]);
    void cadastrarVeiculo(const char placaVeiculo[], const char modeloVeiculo[], const char localAtualVeiculo[], int statusVeiculo);
    void listarVeiculos();
    void atualizarVeiculo(const char placa[]);
    void excluirVeiculo(const char placa[]);
    
    int buscarPedido(const char id[]);
    void cadastrarPedido(const char* idPedido, const char* localOrigem, const char* localDestino, float peso);
    void listarPedidos();
    void atualizarPedido(const char idPedido[]);
    void excluirPedido(const char idPedido[]);
    void realizarEntrega();

    void salvarBackup();
    void carregarBackup();
private:
    int totalLocais;
    int totalVeiculos;
    int totalPedidos;
    Local listaLocal[100];
    Veiculo listaVeiculo[100];
    Pedido listaPedido[100];
};


#endif