#include "veiculo.hpp"
#include <iostream>
#include <cstring>

// Construtor parametrizado
Veiculo::Veiculo(const char *p, const char *m, const char *la) {
    if (strlen(p) > 0 && strlen(p) < 8) {
        strcpy(placa, p);
    } else {
        strcpy(placa, "0000000");
    }
    if (strlen(m) > 0) {
        strcpy(modelo, m);
    } else {
        strcpy(modelo, "Indefinido");
    }
    if (strlen(la) > 0) {
        strcpy(localAtual, la);
    } else {
        strcpy(localAtual, "Indefinido");
    }
    status = 0; // padrão: disponível
}

// Construtor padrão
Veiculo::Veiculo() {
    strcpy(placa, "0000000");
    strcpy(modelo, "Indefinido");
    strcpy(localAtual, "Indefinido");
    status = 0;
}

// Getters
char* Veiculo::getPlaca() { return placa; }
char* Veiculo::getModelo() { return modelo; }
char* Veiculo::getLocalAtual() { return localAtual; }
char Veiculo::getStatus() { return status; }

// Setters
void Veiculo::setPlaca(const char p[]) {
    if (strlen(p) > 0 && strlen(p) < 8) {
        strcpy(placa, p);
    } else {
        strcpy(placa, "0000000");
    }
}
void Veiculo::setModelo(const char m[]) {
    if (strlen(m) > 0) {
        strcpy(modelo, m);
    } else {
        strcpy(modelo, "Indefinido");
    }
}
void Veiculo::setLocalAtual(const char la[]) {
    if (strlen(la) > 0) {
        strcpy(localAtual, la);
    } else {
        strcpy(localAtual, "Indefinido");
    }
}
void Veiculo::setStatus(int s) {
    status = s;
}