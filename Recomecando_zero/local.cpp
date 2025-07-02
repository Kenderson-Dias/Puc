#include "local.hpp"
#include <vector>
#include <iostream>

// Construtor parametrizado
Local::Local(char n[], int cx, int cy) {
    if (strlen(n) >= 2) {
        strcpy(nome, n);
    }
    coordenadaX = cx;
    coordenadaY = cy;
}

// Construtor padrão
Local::Local() {
    strcpy(nome, "Não cadastrado");
    coordenadaX = 0;
    coordenadaY = 0;
}

// Getters
char* Local::getNome() { return nome; }
int Local::getCx() { return coordenadaX; }
int Local::getCy() { return coordenadaY; }

// Setters
void Local::setNome(char n[]) {
    if (strlen(n) > 2) {
        strcpy(nome, n);
    } else {
        strcpy(nome, "Não cadastrado");
    }
}
void Local::setCx(int cx) {
    coordenadaX = cx;
}
void Local::setCy(int cy) {
    coordenadaY = cy;
}