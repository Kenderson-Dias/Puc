#include <iostream>
#include <cstdio>   
#include <cstring>  
#define MAX_QUARTOS 1000
#define MAX_CLIENTES 1000
#define MAX_FUNCIONARIOS 1000

int totalQuartos = 0;
int totalClientes = 0;
int totalFuncionarios = 0;

using namespace std;

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
    Cliente (int cod, char *name, char *address, char *cell) {
        if (cod > -1) {
            id = cod;
        }
        if (strlen(name) > 0) {
            strcpy(nome, name);
        }
        if (strlen(address) > 0) {
            strcpy(endereco, address);
        }
        if (strlen(cell) > 0) {
            strcpy(telefone, cell);
        }
    }

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

class Funcionario {
protected:
    int id;
    char nome[50];
    char endereco[100];
    char telefone[14];
    char cargo[50];
    float salario;
public:
    //Construtor padrão
    Funcionario(){
        
    }

    //Construtor parametrizado
    Funcionario(int cod, char *n, char *adress, char *cell, char *role, float pay) {
        if (cod > -1) {
            id = cod;
        }
        if (strlen(name) > 0) {
            strcpy(nome, name);
        }
        if (strlen(address) > 0) {
            strcpy(endereco, address);
        }
        if (strlen(cell) > 0) {
            strcpy(telefone, cell);
        }
        if (strlen(role) > 0) {
            strcpy(cargo, role);
        }
        if (pay > 0.0) {
            salario = pay;
        }
    }

    void setId(int cod);
    void setNome(char *name);
    void setEndereco(char *address);
    void setTelefone(char *cell);

    int getId() { return id; }
    char *getNome() { return nome; }
    char *getEndereco() { return endereco; }
    char *getTelefone() { return telefone; }
    char *getCargo() { return cargo; }
    float getSalario() { return salario; }

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

//Procedimentos para backup e restauração de dados
void salvarBackup() {
    FILE *fp;

    fp = fopen("quartos.dat", "wb");
    if (!fp) { cout << "Erro ao salvar quartos.\n"; return; }
    for (int i = 0; i < totalQuartos; i++)
        fwrite(&listaQuartos[i], sizeof(Local), 1, fp);
    fclose(fp);

    fp = fopen("clientes.dat", "wb");
    if (!fp) { cout << "Erro ao salvar clientes.\n"; return; }
    for (int i = 0; i < totalClientes; i++)
        fwrite(&listaClientes[i], sizeof(Cliente), 1, fp);
    fclose(fp);

    fp = fopen("funcionarios.dat", "wb");
    if (!fp) { cout << "Erro ao salvar funcionarios.\n"; return; }
    for (int i = 0; i < totalFuncionarios; i++)
        fwrite(&listafunciorios[i], sizeof(Funcionario), 1, fp);
    fclose(fp);
    cout << "Backup de dados realizado com sucesso\n";
}
void carregarBackup() {
    FILE *fp;

    // Limpa as listas antes de carregar o backup
    totalQuartos = 0;
    totalClientes = 0;
    totalFuncionarios = 0;

    fp = fopen("quartos.dat", "rb");
    if (fp) {
        while (fread(&listaQuarto[totalQuartos], sizeof(Quarto), 1, fp))
            totalQuartos++;
        fclose(fp);
    }

    fp = fopen("clientes.dat", "rb");
    if (fp) {
        while (fread(&listaCliente[totalClientes], sizeof(Cliente), 1, fp))
            totalClientes++;
        fclose(fp);
    }

    fp = fopen("funcionarios.dat", "rb");
    if (fp) {
        while (fread(&listaFuncionario[totalFuncionarios], sizeof(Funcionario), 1, fp))
            totalFuncionarios++;
        fclose(fp);
    }
    cout << "Dados recuperados com sucesso\n";
}



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