#include <iostream>
#include <cstdio>   
#include <cstring> 

//Constantes globais 
#define MAX_QUARTOS 1000
#define MAX_CLIENTES 1000
#define MAX_FUNCIONARIOS 1000
#define MAX_ESTADIAS 1000

int totalQuartos = 0;
int totalClientes = 0;
int totalFuncionarios = 0;
int totalEstadias = 0;

//Para cin e cout sem precisar de "std::"
using namespace std;
 
class Quarto {
protected:
    int numDoQuarto;
    int qtdHospedes;
    float valorDiaria;
    char status[10];
public:
    Quarto(){
        numDoQuarto = -1;
        qtdHospedes = 0;
        valorDiaria = 0.0;
        strcpy(status, "Desocupado");
    }

    Quarto(int n, int q, float vd){
        numDoQuarto = n;
        qtdHospedes = q;
        valorDiaria = vd;
        strcpy(status, "Desocupado");
    }

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
        if (vd > 0.0) {
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
    float getValorDiaria() { return valorDiaria; } 
    char* getStatus() { return status; } 
};

class Cliente {
protected:
    int id;
    char nome[50];
    char endereco[100];
    char telefone[18];
public:
    //Construtor padrão
    Cliente() {
        id = -1;
        strcpy(nome, "Nao cadastrado");
        strcpy(telefone, "+00 (00) 00000000");
        strcpy(endereco, "Nao cadastrado");
    }

    //Construtor parametrizado
    Cliente (int cod, char *name, char *address, char *cell) {
        if (cod > -1) id = cod;
        if (strlen(name) > 0) strcpy(nome, name);
        if (strlen(address) > 0) strcpy(endereco, address);
        if (strlen(cell) > 0) strcpy(telefone, cell);
    }

    void setId(int cod) {
        if (cod > -1) id = cod;
    }
    void setNome(char *name) {
        if (strlen(name) > 0) strcpy(nome, name);
    }
    void setEndereco(char *address) {
        if (strlen(address) > 0) strcpy(endereco, address);
    }
    void setTelefone(char *cell) {
        if (strlen(cell) > 0) strcpy(telefone, cell);
    }

    int getId() { return id; }
    char *getNome() { return nome; }
    char *getEndereco() { return endereco; }
    char *getTelefone() { return telefone; }
};

class Funcionario {
protected:
    int id;
    char nome[50];
    char endereco[100];
    char telefone[18];
    char cargo[50];
    float salario;
public:
    //Construtor padrão
    Funcionario() {
        id = -1;
        strcpy(nome, "Sem nome registrado");
        strcpy(endereco, "Nao cadastrado");
        strcpy(telefone, "+00 (00) 00000000");
        strcpy(cargo, "Sem cargo registrado");
        salario = 0.0;
    }

    //Construtor parametrizado
    Funcionario(int cod, char *n, char *adress, char *cell, char *role, float pay) {
        if (cod > -1) id = cod;
        if (strlen(n) > 0) strcpy(nome, n);
        if (strlen(adress) > 0) strcpy(endereco, adress);
        if (strlen(cell) > 0) strcpy(telefone, cell);
        if (strlen(role) > 0) strcpy(cargo, role);
        if (pay > 0.0) salario = pay;
    }

    void setId(int cod) {
        if (cod > -1) {
            id = cod;
        }
    }
    void setNome(char *name) {
        if (strlen(name) > 0) {
            strcpy(nome, name);
        }
    }
    void setEndereco(char *address) {
        if (strlen(address) > 0) {
            strcpy(endereco, address);
        }
    }
    void setTelefone(char *cell) {
        if (strlen(cell) > 0) {
            strcpy(telefone, cell);   
        }
    }
    void setCargo(char *role) {
        if (strlen(role) > 0) {
            strcpy(cargo, role);   
        }
    }
    void setSalario(float pay) {
        if (pay > 0) {
            salario = pay;
        }
    }

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
public:
    void setCod(char* c) {
        if (strlen(c) > 0) {
            strcpy(cod, c);
        }
    }
    void setDataEntrada(int de) {
        dataEntrada = de;
    }
    void setDataSaida(int ds) {
        dataSaida = ds;
    }
    void setQtdDiarias(int qd) {
        if (qd > 0) {
            qtdDiarias = qd;
        }
    }
    void setIdCliente(int id) {
        idCliente = new char[sizeof(int)];
        memcpy(idCliente, &id, sizeof(int));
    }
    void setNumQuarto(int nq) {
        numQuarto = new int;
        *numQuarto = nq;
    }

    char* getCod() { return cod; }
    int getDataEntrada() { return dataEntrada; }
    int getDataSaida() { return dataSaida; }
    int getQtdDiarias() { return qtdDiarias; }    
    int getIdCliente() { return *idCliente; }
    int getNumQuarto() { return *numQuarto; }
};

// Arrays globais
Quarto listaQuartos[MAX_QUARTOS];
Cliente listaClientes[MAX_CLIENTES];
Funcionario listaFuncionarios[MAX_FUNCIONARIOS];
Estadia listaEstadias[MAX_CLIENTES];

// Procedimentos de Quartos
void cadastrarQuarto() {
    if (totalQuartos >= MAX_QUARTOS) {
        cout << "Limite de quartos atingido!\n";
        return;
    }
    int num, qtd;
    float valor;
    
    bool numValido = false;
    do {
        cout << "Numero do quarto: ";
        cin >> num;
        if (num < 0) {
            cout << "Numero invalido! Digite um valor nao negativo.\n";
        } else {
            bool existe = false;
            for (int i = 0; i < totalQuartos; i++) {
                if (listaQuartos[i].getNumDoQuarto() == num) {
                    existe = true;
                    break;
                }
            }
            if (existe) {
                cout << "Numero de quarto ja existe! Tente outro.\n";
            } else {
                numValido = true;
            }
        }
    } while (!numValido);

    cout << "Quantidade de hospedes: ";
    cin >> qtd;
    cout << "Valor da diaria: ";
    cin >> valor;

    listaQuartos[totalQuartos].setNumDoQuarto(num);
    listaQuartos[totalQuartos].setQtdHospedes(qtd);
    listaQuartos[totalQuartos].setValorDiaria(valor);
    listaQuartos[totalQuartos].setStatus("Desocupado");
    totalQuartos++;
    cout << "Quarto cadastrado com sucesso!\n";
}

void listarQuartos() {
    if (totalQuartos == 0) {
        cout << "Nenhum quarto cadastrado.\n";
        return;
    }
    cout << "\n---Lista de Quartos---\n";
    for (int i = 0; i < totalQuartos; i++) {
        cout << "Quarto " << (i+1) << ": Numero " << listaQuartos[i].getNumDoQuarto()
             << " | Hospedes: " << listaQuartos[i].getQtdHospedes()
             << " | Valor: R$" << listaQuartos[i].getValorDiaria()
             << " | Status: " << listaQuartos[i].getStatus() << "\n";
    }
}

void pesquisarQuarto() {
    int num;
    cout << "Digite o numero do quarto: ";
    cin >> num;
    for (int i = 0; i < totalQuartos; i++) {
        if (listaQuartos[i].getNumDoQuarto() == num) {
            cout << "Quarto encontrado!\n";
            cout << "Numero: " << listaQuartos[i].getNumDoQuarto()
                 << " | Hospedes: " << listaQuartos[i].getQtdHospedes()
                 << " | Valor: R$" << listaQuartos[i].getValorDiaria()
                 << " | Status: " << listaQuartos[i].getStatus() << "\n";
            return;
        }
    }
    cout << "Quarto nao encontrado.\n";
}

void atualizarQuarto() {
    int num;
    cout << "Digite o numero do quarto a atualizar: ";
    cin >> num;
    for (int i = 0; i < totalQuartos; i++) {
        if (listaQuartos[i].getNumDoQuarto() == num) {
            cout << "Quarto encontrado. Digite os novos dados:\n";
            int qtd;
            float valor;
            cout << "Nova quantidade de hospedes: ";
            cin >> qtd;
            cout << "Novo valor da diaria: ";
            cin >> valor;
            listaQuartos[i].setQtdHospedes(qtd);
            listaQuartos[i].setValorDiaria(valor);
            cout << "Quarto atualizado com sucesso!\n";
            return;
        }
    }
    cout << "Quarto nao encontrado.\n";
}

void excluirQuarto() {
    int num;
    cout << "Digite o numero do quarto a excluir: ";
    cin >> num;
    for (int i = 0; i < totalQuartos; i++) {
        if (listaQuartos[i].getNumDoQuarto() == num) {
            for (int j = i; j < totalQuartos - 1; j++) {
                listaQuartos[j] = listaQuartos[j + 1];
            }
            totalQuartos--;
            cout << "Quarto excluido com sucesso!\n";
            return;
        }
    }
    cout << "Quarto nao encontrado.\n";
}

// Procedimentos de Clientes
void cadastrarCliente() {
    if (totalClientes >= MAX_CLIENTES) {
        cout << "Limite de clientes atingido!\n";
        return;
    }
    int id;
    char nome[50], endereco[100], telefone[18];
    
    bool idValido = false;
    do {
        cout << "ID do cliente: ";
        cin >> id;
        if (id < 0) {
            cout << "ID invalido! Digite um valor nao negativo.\n";
        } else {
            bool existe = false;
            for (int i = 0; i < totalClientes; i++) {
                if (listaClientes[i].getId() == id) {
                    existe = true;
                    break;
                }
            }
            if (existe) {
                cout << "ID ja existe! Tente outro.\n";
            } else {
                idValido = true;
            }
        }
    } while (!idValido);

    cin.ignore();
    cout << "Nome: ";
    cin.getline(nome, 50);
    cout << "Endereco: ";
    cin.getline(endereco, 100);
    cout << "Telefone: ";
    cin.getline(telefone, 18);

    listaClientes[totalClientes].setId(id);
    listaClientes[totalClientes].setNome(nome);
    listaClientes[totalClientes].setEndereco(endereco);
    listaClientes[totalClientes].setTelefone(telefone);
    totalClientes++;
    cout << "Cliente cadastrado com sucesso!\n";
}

void listarClientes() {
    if (totalClientes == 0) {
        cout << "Nenhum cliente cadastrado.\n";
        return;
    }
    cout << "\n---Lista de Clientes---\n";
    for (int i = 0; i < totalClientes; i++) {
        cout << "Cliente " << (i+1) << ": ID " << listaClientes[i].getId()
             << " | Nome: " << listaClientes[i].getNome()
             << " | Telefone: " << listaClientes[i].getTelefone() << "\n";
    }
}

void pesquisarCliente() {
    int id;
    cout << "Digite o ID do cliente: ";
    cin >> id;
    for (int i = 0; i < totalClientes; i++) {
        if (listaClientes[i].getId() == id) {
            cout << "Cliente encontrado!\n";
            cout << "ID: " << listaClientes[i].getId()
                 << " | Nome: " << listaClientes[i].getNome()
                 << " | Endereco: " << listaClientes[i].getEndereco()
                 << " | Telefone: " << listaClientes[i].getTelefone() << "\n";
            return;
        }
    }
    cout << "Cliente nao encontrado.\n";
}

void atualizarCliente() {
    int id;
    cout << "Digite o ID do cliente a atualizar: ";
    cin >> id;
    cin.ignore();
    for (int i = 0; i < totalClientes; i++) {
        if (listaClientes[i].getId() == id) {
            cout << "Cliente encontrado. Digite os novos dados:\n";
            char nome[50], endereco[100], telefone[18];
            cout << "Novo nome: ";
            cin.getline(nome, 50);
            cout << "Novo endereco: ";
            cin.getline(endereco, 100);
            cout << "Novo telefone: ";
            cin.getline(telefone, 18);
            listaClientes[i].setNome(nome);
            listaClientes[i].setEndereco(endereco);
            listaClientes[i].setTelefone(telefone);
            cout << "Cliente atualizado com sucesso!\n";
            return;
        }
    }
    cout << "Cliente nao encontrado.\n";
}

void excluirCliente() {
    int id;
    cout << "Digite o ID do cliente a excluir: ";
    cin >> id;
    for (int i = 0; i < totalClientes; i++) {
        if (listaClientes[i].getId() == id) {
            for (int j = i; j < totalClientes - 1; j++) {
                listaClientes[j] = listaClientes[j + 1];
            }
            totalClientes--;
            cout << "Cliente excluido com sucesso!\n";
            return;
        }
    }
    cout << "Cliente nao encontrado.\n";
}

// Procedimentos de Funcionarios
void cadastrarFuncionario() {
    if (totalFuncionarios >= MAX_FUNCIONARIOS) {
        cout << "Limite de funcionarios atingido!\n";
        return;
    }
    int id;
    float salario;
    char nome[50], endereco[100], telefone[18], cargo[50];
    
    bool idValido = false;
    do {
        cout << "ID do funcionario: ";
        cin >> id;
        if (id < 0) {
            cout << "ID invalido! Digite um valor nao negativo.\n";
        } else {
            bool existe = false;
            for (int i = 0; i < totalFuncionarios; i++) {
                if (listaFuncionarios[i].getId() == id) {
                    existe = true;
                    break;
                }
            }
            if (existe) {
                cout << "ID ja existe! Tente outro.\n";
            } else {
                idValido = true;
            }
        }
    } while (!idValido);

    cin.ignore();
    cout << "Nome: ";
    cin.getline(nome, 50);
    cout << "Endereco: ";
    cin.getline(endereco, 100);
    cout << "Telefone: ";
    cin.getline(telefone, 18);
    cout << "Cargo: ";
    cin.getline(cargo, 50);
    cout << "Salario: ";
    cin >> salario;

    listaFuncionarios[totalFuncionarios].setId(id);
    listaFuncionarios[totalFuncionarios].setNome(nome);
    listaFuncionarios[totalFuncionarios].setEndereco(endereco);
    listaFuncionarios[totalFuncionarios].setTelefone(telefone);
    listaFuncionarios[totalFuncionarios].setCargo(cargo);
    listaFuncionarios[totalFuncionarios].setSalario(salario);
    totalFuncionarios++;
    cout << "Funcionario cadastrado com sucesso!\n";
}

void listarFuncionarios() {
    if (totalFuncionarios == 0) {
        cout << "Nenhum funcionario cadastrado.\n";
        return;
    }
    cout << "\n---Lista de Funcionarios---\n";
    for (int i = 0; i < totalFuncionarios; i++) {
        cout << "Funcionario " << (i+1) << ": ID " << listaFuncionarios[i].getId()
             << " | Nome: " << listaFuncionarios[i].getNome()
             << " | Cargo: " << listaFuncionarios[i].getCargo()
             << " | Salario: R$" << listaFuncionarios[i].getSalario() << "\n";
    }
}

void pesquisarFuncionario() {
    if (totalFuncionarios == 0) {
        cout << "Nenhum funcionario cadastrado.\n";
        return;
    }
    int id;
    cout << "Digite o ID do funcionario: ";
    cin >> id;
    for (int i = 0; i < totalFuncionarios; i++) {
        if (listaFuncionarios[i].getId() == id) {
            cout << "Funcionario encontrado!\n";
            cout << "ID: " << listaFuncionarios[i].getId()
                 << " | Nome: " << listaFuncionarios[i].getNome()
                 << " | Endereco: " << listaFuncionarios[i].getEndereco()
                 << " | Telefone: " << listaFuncionarios[i].getTelefone()
                 << " | Cargo: " << listaFuncionarios[i].getCargo()
                 << " | Salario: R$" << listaFuncionarios[i].getSalario() << "\n";
            return;
        }
    }
    cout << "Funcionario nao encontrado.\n";
}

void atualizarFuncionario() {
    if (totalFuncionarios == 0) {
        cout << "Nenhum funcionario cadastrado.\n";
        return;
    }
    int id;
    cout << "Digite o ID do funcionario a atualizar: ";
    cin >> id;
    cin.ignore();
    for (int i = 0; i < totalFuncionarios; i++) {
        if (listaFuncionarios[i].getId() == id) {
            cout << "Funcionario encontrado. Digite os novos dados (pressione Enter para manter o atual):\n";

            char nome[50], endereco[100], telefone[18], cargo[50];
            float salario;

            cout << "Nome atual: " << listaFuncionarios[i].getNome() << "\nNovo nome: ";
            cin.getline(nome, 50);
            if (strlen(nome) > 0) listaFuncionarios[i].setNome(nome);

            cout << "Endereco atual: " << listaFuncionarios[i].getEndereco() << "\nNovo endereco: ";
            cin.getline(endereco, 100);
            if (strlen(endereco) > 0) listaFuncionarios[i].setEndereco(endereco);

            cout << "Telefone atual: " << listaFuncionarios[i].getTelefone() << "\nNovo telefone: ";
            cin.getline(telefone, 18);
            if (strlen(telefone) > 0) 
                listaFuncionarios[i].setTelefone(telefone);

            cout << "Cargo atual: " << listaFuncionarios[i].getCargo() << "\nNovo cargo: ";
            cin.getline(cargo, 50);
            if (strlen(cargo) > 0) 
                listaFuncionarios[i].setCargo(cargo);

            cout << "Salario atual: R$" << listaFuncionarios[i].getSalario() << "\nNovo salario (0 para manter): ";
            if (cin >> salario) {
                if (salario > 0.0f) 
                    listaFuncionarios[i].setSalario(salario);
            }
            cin.ignore();

            cout << "Funcionario atualizado com sucesso!\n";
            return;
        }
    }
    cout << "Funcionario nao encontrado.\n";
}

void excluirFuncionario() {
    if (totalFuncionarios == 0) {
        cout << "Nenhum funcionario cadastrado.\n";
        return;
    }
    int id;
    cout << "Digite o ID do funcionario a excluir: ";
    cin >> id;
    for (int i = 0; i < totalFuncionarios; i++) {
        if (listaFuncionarios[i].getId() == id) {
            for (int j = i; j < totalFuncionarios - 1; j++) {
                listaFuncionarios[j] = listaFuncionarios[j + 1];
            }
            totalFuncionarios--;
            cout << "Funcionario excluido com sucesso!\n";
            return;
        }
    }
    cout << "Funcionario nao encontrado.\n";
}

// Verifica se o ano é bissexto
bool ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Retorna quantos dias tem o mês naquele ano específico
int getDiasNoMes(int mes, int ano) {
    int dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ehBissexto(ano)) return 29;
    return dias[mes];
}

// Procedimentos de Estadia
void cadastrarEstadia() {
    if (totalClientes == 0) {
        cout << "Nenhum cliente cadastrado. Cadastre um cliente primeiro.\n";
        return;
    }
    if (totalQuartos == 0) {
        cout << "Nenhum quarto cadastrado. Cadastre um quarto primeiro.\n";
        return;
    }

    int idCliente, qtdHospedes;
    cout << "ID do cliente: ";
    cin >> idCliente;

    // Verificar se cliente existe
    int indiceCliente = -1;
    for (int i = 0; i < totalClientes; i++) {
        if (listaClientes[i].getId() == idCliente) {
            indiceCliente = i;
            break;
        }
    }
    if (indiceCliente == -1) {
        cout << "Cliente nao encontrado.\n";
        return;
    }

    cout << "Quantidade de hospedes: ";
    cin >> qtdHospedes;
    if (qtdHospedes <= 0) {
        cout << "Quantidade invalida.\n";
        return;
    }

    int diaEnt, mesEnt, anoEnt;
    int diaSai, mesSai, anoSai;

    cout << "Data de Entrada:\n";
    cout << "Dia: "; cin >> diaEnt;
    cout << "Mes: "; cin >> mesEnt;
    cout << "Ano: "; cin >> anoEnt;

    cout << "Data de Saida:\n";
    cout << "Dia: "; cin >> diaSai;
    cout << "Mes: "; cin >> mesSai;
    cout << "Ano: "; cin >> anoSai;

    // Validações de dia/mês
    if (mesEnt < 1 || mesEnt > 12 || diaEnt < 1 || diaEnt > getDiasNoMes(mesEnt, anoEnt)) {
        cout << "Data de entrada invalida.\n"; return;
    }
    if (mesSai < 1 || mesSai > 12 || diaSai < 1 || diaSai > getDiasNoMes(mesSai, anoSai)) {
        cout << "Data de saida invalida.\n"; return;
    }

    long dataEntradaComp = anoEnt * 10000 + mesEnt * 100 + diaEnt;
    long dataSaidaComp = anoSai * 10000 + mesSai * 100 + diaSai;

    if (dataSaidaComp <= dataEntradaComp) {
        cout << "Erro: A data de saida deve ser posterior a data de entrada.\n";
        return;
    }

    int qtdDiarias = 0;
    int dTemp = diaEnt, mTemp = mesEnt, aTemp = anoEnt;

    // Loop que conta os dias exatos
    while (dTemp != diaSai || mTemp != mesSai || aTemp != anoSai) {
        qtdDiarias++;
        dTemp++;
        if (dTemp > getDiasNoMes(mTemp, aTemp)) {
            dTemp = 1;
            mTemp++;
            if (mTemp > 12) {
                mTemp = 1;
                aTemp++;
            }
        }
    }

    // Listar quartos disponíveis
    cout << "\n---Quartos Disponiveis---\n";
    int quartosDisponiveis = 0;
    for (int i = 0; i < totalQuartos; i++) {
        if (listaQuartos[i].getQtdHospedes() >= qtdHospedes &&
            strcmp(listaQuartos[i].getStatus(), "Desocupado") == 0) {
            cout << "Quarto " << listaQuartos[i].getNumDoQuarto()
                 << " | Hospedes: " << listaQuartos[i].getQtdHospedes()
                 << " | Valor: R$" << listaQuartos[i].getValorDiaria()
                 << " | Status: " << listaQuartos[i].getStatus() << "\n";
            quartosDisponiveis++;
        }
    }

    if (quartosDisponiveis == 0) {
        cout << "Nenhum quarto disponivel com capacidade para " << qtdHospedes << " hospede(s).\n";
        return;
    }

    int numQuartoEscolhido;
    cout << "\nDigite o numero do quarto desejado: ";
    cin >> numQuartoEscolhido;

    int indiceQuarto = -1;
    for (int i = 0; i < totalQuartos; i++) {
        if (listaQuartos[i].getNumDoQuarto() == numQuartoEscolhido &&
            listaQuartos[i].getQtdHospedes() >= qtdHospedes &&
            strcmp(listaQuartos[i].getStatus(), "Desocupado") == 0) {
            indiceQuarto = i;
            break;
        }
    }

    if (indiceQuarto == -1) {
        cout << "Quarto nao disponivel ou invalido.\n";
        return;
    }

    char cod[15];
    sprintf(cod, "EST%d%d", idCliente, diaEnt); 

    int dataEntradaSalvar = (diaEnt * 1000000) + (mesEnt * 10000) + anoEnt;
    int dataSaidaSalvar = (diaSai * 1000000) + (mesSai * 10000) + anoSai;

    listaEstadias[totalEstadias].setCod(cod);
    listaEstadias[totalEstadias].setDataEntrada(dataEntradaSalvar);
    listaEstadias[totalEstadias].setDataSaida(dataSaidaSalvar);
    listaEstadias[totalEstadias].setQtdDiarias(qtdDiarias);
    listaEstadias[totalEstadias].setIdCliente(idCliente);
    listaEstadias[totalEstadias].setNumQuarto(listaQuartos[indiceQuarto].getNumDoQuarto());

    listaQuartos[indiceQuarto].setStatus("Ocupado");

    totalEstadias++;
    cout << "\nEstadia cadastrada com sucesso!\n";
    cout << "Codigo: " << cod << "\n";
    cout << "Quarto: " << listaQuartos[indiceQuarto].getNumDoQuarto() << "\n";
    cout << "Total de Diarias: " << qtdDiarias << "\n";
    cout << "Valor Total: R$" << (listaQuartos[indiceQuarto].getValorDiaria() * qtdDiarias) << "\n";
}

void listarEstadias() {
    if (totalEstadias == 0) {
        cout << "Nenhuma estadia cadastrada.\n";
        return;
    }
    cout << "\n---Lista de Estadias---\n";
    for (int i = 0; i < totalEstadias; i++) {
        cout << "Estadia " << (i+1) << ": Codigo " << listaEstadias[i].getCod()
             << " | Cliente ID: " << listaEstadias[i].getIdCliente()
             << " | Quarto: " << listaEstadias[i].getNumQuarto()
             << " | Entrada: " << listaEstadias[i].getDataEntrada()
             << " | Saida: " << listaEstadias[i].getDataSaida()
             << " | Diarias: " << listaEstadias[i].getQtdDiarias() << "\n";
    }
}

void pesquisarEstadia() {
    int idCliente;
    cout << "Digite o ID do cliente: ";
    cin >> idCliente;

    int encontrado = 0;
    for (int i = 0; i < totalEstadias; i++) {
        if (listaEstadias[i].getIdCliente() == idCliente) {
            cout << "Estadia encontrada!\n";
            cout << "Codigo: " << listaEstadias[i].getCod()
                 << " | Quarto: " << listaEstadias[i].getNumQuarto()
                 << " | Entrada: " << listaEstadias[i].getDataEntrada()
                 << " | Saida: " << listaEstadias[i].getDataSaida()
                 << " | Diarias: " << listaEstadias[i].getQtdDiarias() << "\n";
            encontrado = 1;
        }
    }
    if (!encontrado) {
        cout << "Nenhuma estadia encontrada para este cliente.\n";
    }
}

void excluirEstadia() {
    char cod[15];
    cout << "Digite o codigo da estadia a excluir: ";
    cin.ignore();
    cin.getline(cod, 15);

    for (int i = 0; i < totalEstadias; i++) {
        if (strcmp(listaEstadias[i].getCod(), cod) == 0) {
            // Liberar quarto
            int numQuarto = listaEstadias[i].getNumQuarto();
            for (int j = 0; j < totalEstadias; j++) {
                if (listaQuartos[j].getNumDoQuarto() == numQuarto) {
                    listaQuartos[j].setStatus("Desocupado");
                    break;
                }
            }
            // Remover estadia
            for (int j = i; j < totalEstadias - 1; j++) {
                listaEstadias[j] = listaEstadias[j + 1];
            }
            totalEstadias--;
            cout << "Estadia excluida com sucesso!\n";
            return;
        }
    }
    cout << "Estadia nao encontrada.\n";
}
//Salva as clases em arquivos separados pra cada uma
void salvarBackup() {
    FILE *fp;

    fp = fopen("quartos.dat", "wb");
    if (!fp) { cout << "Erro ao salvar quartos.\n"; return; }
    for (int i = 0; i < totalQuartos; i++)
        fwrite(&listaQuartos[i], sizeof(Quarto), 1, fp);
    fclose(fp);

    fp = fopen("clientes.dat", "wb");
    if (!fp) { cout << "Erro ao salvar clientes.\n"; return; }
    for (int i = 0; i < totalClientes; i++)
        fwrite(&listaClientes[i], sizeof(Cliente), 1, fp);
    fclose(fp);

    fp = fopen("funcionarios.dat", "wb");
    if (!fp) { cout << "Erro ao salvar funcionarios.\n"; return; }
    for (int i = 0; i < totalFuncionarios; i++)
        fwrite(&listaFuncionarios[i], sizeof(Funcionario), 1, fp);
    fclose(fp);

    fp = fopen("reservas.dat", "wb");
    if (!fp) { cout << "Erro ao salvar reservas.\n"; return; }
    for (int i = 0; i < totalEstadias; i++)
        fwrite(&listaEstadias[i], sizeof(Estadia), 1, fp);
    fclose(fp);

    cout << "Backup salvo com sucesso.\n";
}

// Carrega os dados dos arquivos binários para as listas, limpando as listas antes de carregar o backup
void carregarBackup() {
    FILE *fp;

    // Limpa as listas antes de carregar o backup
    totalQuartos = 0;
    totalClientes = 0;
    totalFuncionarios = 0;
    totalEstadias = 0;

    fp = fopen("quartos.dat", "rb");
    if (fp) {
        while (fread(&listaQuartos[totalQuartos], sizeof(Quarto), 1, fp))
            totalQuartos++;
        fclose(fp);
    }

    fp = fopen("clientes.dat", "rb");
    if (fp) {
        while (fread(&listaClientes[totalClientes], sizeof(Cliente), 1, fp))
            totalClientes++;
        fclose(fp);
    }

    fp = fopen("funcionarios.dat", "rb");
    if (fp) {
        while (fread(&listaFuncionarios[totalFuncionarios], sizeof(Funcionario), 1, fp))
            totalFuncionarios++;
        fclose(fp);
    }

    fp = fopen("reservas.dat", "rb");
    if (fp) {
        while (fread(&listaEstadias[totalEstadias], sizeof(Estadia), 1, fp))
            totalEstadias++;
        fclose(fp);
    }
    cout << "Backup restaurado com sucesso.\n";
}

int main(){
    int optMenu, optSubMenu;
    do {
        cout << "\n---Hotel Descanso Garantido---\n"
             << "1. Gerenciamento de clientes\n"
             << "2. Gerenciamento de quartos\n"
             << "3. Gerenciamento de reservas\n"
             << "4. Gerenciamento de funcionarios\n"
             << "5. Backup de dados\n"
             << "6. Restaurar dados\n"
             << "0. Encerrar programa\n"
             << "Digite a opcao que deseja: ";
        cin >> optMenu;
        switch (optMenu) {
            case 1:
                do {
                    cout << "\n---Menu de Clientes---\n"
                         << "1. Cadastrar cliente\n"
                         << "2. Pesquisar cliente\n"
                         << "3. Listar clientes\n"
                         << "4. Atualizar dados do cliente\n"
                         << "5. Excluir dados do cliente\n"
                         << "0. Voltar\n"
                         << "Digite a opcao: ";
                    cin >> optSubMenu;
                    switch (optSubMenu) {
                        case 1: cadastrarCliente(); 
                            break;
                        case 2: pesquisarCliente(); 
                            break;
                        case 3: listarClientes(); 
                            break;
                        case 4: atualizarCliente(); 
                            break;
                        case 5: excluirCliente(); 
                            break;
                        case 0: 
                            break;
                        default: cout << "Opcao invalida.\n"; 
                            break;
                    }
                } while (optSubMenu != 0);
                break;
            case 2:
                do {
                    cout << "\n---Menu de Quartos---\n"
                         << "1. Cadastrar quarto\n"
                         << "2. Pesquisar quarto\n"
                         << "3. Listar quartos\n"
                         << "4. Atualizar dados do quarto\n"
                         << "5. Excluir dados do quarto\n"
                         << "0. Voltar\n"
                         << "Digite a opcao: ";
                    cin >> optSubMenu;
                    switch (optSubMenu) {
                        case 1: cadastrarQuarto(); 
                            break;
                        case 2: pesquisarQuarto(); 
                            break;
                        case 3: listarQuartos(); 
                            break;
                        case 4: atualizarQuarto(); 
                            break;
                        case 5: excluirQuarto(); 
                            break;
                        case 0: 
                            break;
                        default: cout << "Opcao invalida.\n"; 
                            break;
                    }
                } while (optSubMenu != 0);
                break;
            case 3:
                do {
                    cout << "\n---Menu de Reservas (Estadias)---\n"
                         << "1. Cadastrar estadia\n"
                         << "2. Pesquisar estadia\n"
                         << "3. Listar estadias\n"
                         << "4. Excluir estadia\n"
                         << "0. Voltar\n"
                         << "Digite a opcao: ";
                    cin >> optSubMenu;
                    switch (optSubMenu) {
                        case 1: cadastrarEstadia(); 
                            break;
                        case 2: pesquisarEstadia(); 
                            break;
                        case 3: listarEstadias(); 
                            break;
                        case 4: excluirEstadia(); 
                            break;
                        case 0: 
                            break;
                        default: cout << "Opcao invalida.\n"; 
                            break;
                    }
                } while (optSubMenu != 0);
                break;
            case 4:
                do {
                    cout << "\n---Menu de Funcionarios---\n"
                         << "1. Cadastrar funcionario\n"
                         << "2. Pesquisar funcionario\n"
                         << "3. Listar funcionarios\n"
                         << "4. Atualizar dados do funcionario\n"
                         << "5. Excluir dados do funcionario\n"
                         << "0. Voltar\n"
                         << "Digite a opcao: ";
                    cin >> optSubMenu;
                    switch (optSubMenu) {
                        case 1: cadastrarFuncionario(); 
                            break;
                        case 2: pesquisarFuncionario(); 
                            break;
                        case 3: listarFuncionarios();  
                            break;
                        case 4: atualizarFuncionario(); 
                            break;
                        case 5: excluirFuncionario(); 
                            break;
                        case 0: 
                            break;
                        default: cout << "Opcao invalida.\n"; break;
                    }
                } while (optSubMenu != 0);
                break;
            case 5:
                salvarBackup();
                break;
            case 6:
                carregarBackup();
                break;
            case 0:
                cout << "Programa Encerrado\n";
                break;
            default:
                cout << "Opcao invalida.\n";
                break;
        }
    } while (optMenu != 0);
    return 0;
}