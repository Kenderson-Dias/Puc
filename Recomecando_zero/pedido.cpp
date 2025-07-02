#include "pedido.hpp"
#include <iostream>
#include <string.h>


Pedido::Pedido() {
    strcpy(id, "0000");
    strcpy(localOrigem, "Indefinido");
    strcpy(localDestino, "Indefinido");
    peso = 0.0f;
}

Pedido::Pedido(const char* idPedido, const char* origem, const char* destino, float p) {
    strncpy(id, idPedido, sizeof(id));
    id[sizeof(id)-1] = '\0';
    strncpy(localOrigem, origem, sizeof(localOrigem));
    localOrigem[sizeof(localOrigem)-1] = '\0';
    strncpy(localDestino, destino, sizeof(localDestino));
    localDestino[sizeof(localDestino)-1] = '\0';
    peso = p;
}

char* Pedido::getId() { return id; }
char* Pedido::getLocalOrigem() { return localOrigem; }
char* Pedido::getLocalDestino() { return localDestino; }
float Pedido::getPeso() { return peso; }

void Pedido::setId(const char idNovo[]) { strncpy(id, idNovo, sizeof(id)); id[sizeof(id)-1] = '\0'; }
void Pedido::setLocalOrigem(const char o[]) { strncpy(localOrigem, o, sizeof(localOrigem)); localOrigem[sizeof(localOrigem)-1] = '\0'; }
void Pedido::setLocalDestino(const char d[]) { strncpy(localDestino, d, sizeof(localDestino)); localDestino[sizeof(localDestino)-1] = '\0'; }
void Pedido::setPeso(float newPeso) { peso = newPeso; }