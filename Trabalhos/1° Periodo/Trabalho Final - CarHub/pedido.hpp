#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string.h>


class Pedido {
protected:
    char id[20];
    char localOrigem[100];
    char localDestino[100];
    float peso;
public:
    // Getters
    char* getId();
    char* getLocalOrigem();
    char* getLocalDestino();
    float getPeso();

    // Setters
    void setId(const char id[]);
    void setLocalOrigem(const char o[]);
    void setLocalDestino(const char d[]);
    void setPeso(float newPeso);

    // Construtor parametrizado
    Pedido(const char* idPedido, const char* localOrigem, const char* localDestino, float peso);

    // Construtor padrão
    Pedido();
    // Funções
    int buscarPedido(const char idPedido[]);
    int cadastrarPedido(const char idPedido[], const char localOrigem[], const char localDestino[], float peso);
};

#endif       