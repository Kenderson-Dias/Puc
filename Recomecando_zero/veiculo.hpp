#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <string.h>


class Veiculo {
protected:
    char placa[8];
    char modelo[100];
    char localAtual[100];
    int status;
public:
    Veiculo(const char *p, const char *m, const char *la);

    Veiculo();

    char *getPlaca();
    char *getModelo();
    char *getLocalAtual();
    char getStatus();

    void setPlaca(const char *p);
    void setModelo(const char *m);
    void setLocalAtual(const char *la);
    void setStatus(int s);

    int buscarVeiculo(const char *placa);
    int cadastrarVeiculo(const char *placaVeiculo, const char *modeloVeiculo, const char *localAtualVeiculo, int statusVeiculo);

};

#endif