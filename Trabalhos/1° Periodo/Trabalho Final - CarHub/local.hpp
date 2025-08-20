#ifndef LOCAL_HPP
#define LOCAL_HPP

#include <string.h>

class Local {
protected:
    char nome[100];
    int coordenadaX;
    int coordenadaY;

public:
    // Construtor parametrizado
    Local(char n[], int cx, int cy);

    // Construtor padrão
    Local();


    // Getters
    char *getNome();
    int getCx();
    int getCy();

    // Setters
    void setNome(char n[]);
    void setCx(int cx);
    void setCy(int cy);

    // Funções
    int buscarLocal(const char nome[]);
    int cadastrarLocal(const char nomeLocal[], int x, int y);
};

#endif