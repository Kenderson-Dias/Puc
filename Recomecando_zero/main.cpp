#include <iostream>
#include <locale.h>

// Bibliotecas do projeto (cada biblioteca contém uma classe)
#include "procedimentos.hpp"
#include "local.hpp"
#include "veiculo.hpp"
#include "pedido.hpp"

using namespace std;

// Função para limpar o buffer do teclado
void limpaBuffer() {
    cin.sync(); // Limpa o buffer de entrada
    cin.clear(); // Limpa o estado de erro do cin
    while (cin.get() != '\n' && cin.good()); // Lê até o final da linha
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    Procedimentos procedimento; // Cria uma instância da classe Procedimentos
    char option, opt;
    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "Selecione uma opção:\n";
        cout << "1. Locais\n";
        cout << "2. Veículos\n";
        cout << "3. Pedidos\n";
        cout << "4. Realizar Entrega\n";
        cout << "5. Salvar Dados\n";
        cout << "6. Carregar Dados\n";
        cout << "0. Encerrar Programa\n";
        cin >> option;
        limpaBuffer(); // Limpa o buffer de entrada para evitar problemas com getline

        switch (option) {
            case '1': {
                cout << "\n--- Menu de Locais ---\n";
                cout << "1. Cadastrar Local\n";
                cout << "2. Listar Locais\n";
                cout << "3. Atualizar Local\n";
                cout << "4. Excluir Local\n";
                cout << "Escolha uma opção: ";
                cin >> opt;
                limpaBuffer();
                switch (opt) {
                    case '1': {
                        // Cadastra um novo local
                        char nomeLocal[100];
                        int x, y;
                        cout << "Insira o nome do local: ";
                        cin.getline(nomeLocal, 100);
                        cout << "Insira a coordenada X: ";
                        cin >> x;
                        cout << "Insira a coordenada Y: ";
                        cin >> y;
                        limpaBuffer();
                        // Verifica se o local já está cadastrado
                        if (procedimento.buscarLocal(nomeLocal) != -1) {
                            cout << "Erro: Local com este nome já existe.\n";
                        } else {
                            procedimento.cadastrarLocal(nomeLocal, x, y);
                            cout << "Local cadastrado com sucesso!\n";
                        }
                        break;
                    }
                    case '2': {
                        // Lista todos os locais cadastrados
                        procedimento.listarLocais();
                        break;
                    }
                    case '3': {
                        // Atualiza um local existente
                        char nomeLocal[100];
                        cout << "Insira o nome do local a ser atualizado: ";
                        cin.getline(nomeLocal, 100);
                        procedimento.atualizarLocal(nomeLocal);
                        break;
                    }
                    case '4': {
                        // Exclui um local existente
                        char nomeLocal[100];
                        cout << "Insira o nome do local a ser excluído: ";
                        cin.getline(nomeLocal, 100);
                        procedimento.excluirLocal(nomeLocal);
                        break;
                    }
                }
                break;
            }
            case '2': {
                cout << "\n--- Menu de Veículos ---\n";
                cout << "1. Cadastrar Veículo\n";
                cout << "2. Listar Veículos\n";
                cout << "3. Atualizar Veículo\n";
                cout << "4. Excluir Veículo\n";
                cout << "Escolha uma opção: ";
                cin >> opt;
                limpaBuffer();
                switch (opt) {
                    case '1': {
                        // Cadastra um novo veículo
                        char placa[8], modelo[100], localAtual[100];
                        int status;
                        cout << "Insira a placa do veículo: ";
                        cin.getline(placa, 8);
                        cout << "Insira o modelo do veículo: ";
                        cin.getline(modelo, 100);
                        cout << "Insira o local atual do veículo: ";
                        cin.getline(localAtual, 100);
                        cout << "Insira o status do veículo (0=Disponível, 1=Indisponível): ";
                        cin >> status;
                        limpaBuffer(); 
                        //Verifica se a placa já está cadastrada
                        if (procedimento.buscarVeiculo(placa) != -1) {
                            cout << "Erro: Veículo com esta placa já existe.\n";
                        } else {
                            procedimento.cadastrarVeiculo(placa, modelo, localAtual, status);
                            cout << "Veículo cadastrado com sucesso!\n";
                        }
                        break;
                    }
                    case '2': {
                        // Lista todos os veículos cadastrados
                        procedimento.listarVeiculos();
                        break;
                    }
                    case '3': {
                        // Atualiza um veículo existente
                        char placa[8];
                        cout << "Insira a placa do veículo a ser atualizado: ";
                        cin.getline(placa, 8);
                        procedimento.atualizarVeiculo(placa);
                        break;
                    }
                    case '4': {
                        // Exclui um veículo existente
                        char placa[8];
                        cout << "Insira a placa do veículo a ser excluído: ";
                        cin.getline(placa, 8);
                        procedimento.excluirVeiculo(placa);
                        break;
                    }
                }
                break;
            }
            case '3': {
                cout << "\n--- Menu de Pedidos ---\n";
                cout << "1. Cadastrar Pedido\n";
                cout << "2. Listar Pedidos\n";
                cout << "3. Atualizar Pedido\n";
                cout << "4. Excluir Pedido\n";
                cout << "Escolha uma opção: ";
                cin >> opt;
                limpaBuffer();
                switch (opt) {
                    case '1': {
                        // Cadastra um novo pedido
                        char id[20], origem[100], destino[100];
                        float peso;
                        cout << "Insira o ID do pedido: ";
                        cin.getline(id, 20);
                        cout << "Insira o local de origem: ";
                        cin.getline(origem, 100);
                        cout << "Insira o local de destino: ";
                        cin.getline(destino, 100);
                        cout << "Insira o Peso (em kg): ";
                        cin >> peso;
                        limpaBuffer();
                        // Verifica se o ID do pedido já está cadastrado
                        if (procedimento.buscarPedido(id) != -1) {
                            cout << "Erro: Pedido com este ID já existe.\n";
                        } else {
                            procedimento.cadastrarPedido(id, origem, destino, peso);
                            cout << "Pedido cadastrado com sucesso!\n";
                        }
                        break;
                    }
                    case '2': {
                        // Lista todos os pedidos cadastrados
                        procedimento.listarPedidos();
                        break;
                    }
                    case '3': {
                        // Atualiza um pedido existente
                        char id[20];
                        cout << "Insira o ID do pedido a ser atualizado: ";
                        cin.getline(id, 20);
                        procedimento.atualizarPedido(id);
                        break;
                    }
                    case '4': {
                        // Exclui um pedido existente
                        char id[20];
                        cout << "Insira o ID do pedido a ser excluído: ";
                        cin.getline(id, 20);
                        procedimento.excluirPedido(id);
                        break;
                    }
                }
                break;
            }
            case '4': {
                //Simula a realização de uma entrega
                procedimento.realizarEntrega();
                break;
            }
            case '5': {
                // Salva os dados em arquivos binarios
                procedimento.salvarBackup();
                break;
            }
            case '6': {
                // Carrega os dados de arquivos salvos anteriormente
                procedimento.carregarBackup();
                break;
            }
            case '0': {
                // Encerra o programa
                cout << "Programa encerrado.\n";
                break;
            }
            default:
                // Outras entradas/entradas inválidas
                limpaBuffer();
                cout << "Opção inválida\n";
                break;
        }

    } while (option != '0');
    // Finaliza o loop do programa

    return 0;
}