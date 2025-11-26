#include <iostream>
#include <cstdio>   
#include <cstring>  
#define MAX_QUARTOS 1000
#define MAX_CLIENTES 1000
#define MAX_FUNCIONARIOS 1000

class Quarto {
protected:
    int numDoQuarto;
    int qtdHospedes;
    float valorDiaria;
    char status[10];
public:
    //Construtor padrão
    Quarto(){
        numDoQuarto = -1;
        qtdHospedes = 0;
        valorDiaria = 0.0;
        strcpy(status, "Desocupado");
    }

    //Construtor parametrizado
    Quarto(int n, int q, float vd){
        numDoQuarto = n;
        qtdHospedes = q;
        valorDiaria = vd;
    }

    //setters e getters
    void setNumDoQuarto(int n) {
        if (n > -1) {
            numDoQuarto = n;
        }
    }
    void setQtdHospedes(int q) {
        if (q > 0) {
            qtdHospedes = q;
        }
    }
    void setValorDiaria(float vd) {
        if (vd = 0.0) {
            valorDiaria = vd;
        }
    }
    void setStatus(char* st) {
        if (strlen(st) > 0) {
            strcpy(status, st);
        }   
    }

    int getNumDoQuarto() { return numDoQuarto; } 
    int getQtdHospedes() { return qtdHospedes; }
    float getValorDiaria() {return valorDiaria; } 
    char* getStatus() { return status; } 

    
    void listarQuartos();
    void atualizarQuarto(int n);
    void excluirQuarto(int n);

};

class Cliente {
protected:
    int id;
    char nome[50];
    char endereco[100];
    char telefone[14];
public:
    //Construtor padrão
    Cliente();

    //Construtor parametrizado
    Cliente (int cod, char *name, char *address, char *cell);

    //Setters e Getters
    void setId(int cod);
    void setNome(char *name);
    void setEndereco(char *address);
    void setTelefone(char *cell);

    int getId() { return id; }
    char *getNome() { return nome; }
    char *getEndereco() { return endereco; }
    char *getTelefone() { return telefone; }

    int buscarPorNome();
    int buscarPorId();
    void listarCadastros();
    void atualizarDados(int n);
    void excluirDados(int n);
};

class Funcionario : public Cliente{
protected:
    char cargo[50];
    float salario;
public:
    //Construtor padrão
    Funcionario();

    //Construtor parametrizado
    Funcionario(char *cod, char *n, char *adress, char *cell, char *role, float pay);


};

class Estadia{
protected:
    char cod[15];
    int dataEntrada;
    int dataSaida;
    int qtdDiarias;    
    char *idCliente;
    int *numQuarto;
};

void salvarBackup();
void carregarBackup();

using namespace std;

int main(){
    int optMenu, optSubMenu;
    do {
        cout << "\n---Hotel Descanso Garantido---" << "\n" << "1. Gerênciamento de clientes\n2. Gerênciamento de quartos\n"
            << "3. Gêrenciamento de reservas\n 4. Gerênciamento de funcionarios\n5. Backup de dados\n 6. Restaurar dados\n" 
            << "0. Encerrar programa\nDigite a opção que deseja: ";
        cin >>  optMenu;
        switch (optMenu) {
            case 1:
                cout << "\n---Menu de Clientes---";
                break;
            case 2:
                cout << "\n---Menu de Quartos---";
                break;
            case 3:
                cout << "\n---Menu de Reservas---";
                break;
            case 4:
                cout << "\n---Menu de Funcionários---";
                break;
            case 5:

                break;
            case 6:

                break;
            case 0:
                cout << "Programa Encerrado\n";
                break;
            default:
                cout << "Opção invalida.\n";
                break;
        }
    } while (optMenu != 0);
}