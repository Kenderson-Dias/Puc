#include "procedimentos.hpp" // Biblioteca com as funções e procedimentos usados no programa (classe Procedimentos)
#include "local.hpp" // Biblioteca de locais (classe Local)
#include "veiculo.hpp" // Biblioteca de veículos (classe Veiculo)
#include "pedido.hpp" // Biblioteca de pedidos (classe Pedido)
#include <cmath> // Operações matemáticas (sqrt, pow)
#include <iostream> // Padrão do C++
#include <cstdio>   // Para arquivos (fopen, fwrite, fread, fclose)
#include <cstring>  // Para manipulação de strings (strcmp, strcpy)

using namespace std;

// Construtor da classe Procedimentos
Procedimentos::Procedimentos() : totalLocais(0), totalVeiculos(0), totalPedidos(0) {}

// Calcula a distância euclidiana entre dois pontos
float Procedimentos::calcularDistancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
}

// Lugares
// Retorna a posição do local encontrado usando o nome como parametro
int Procedimentos::buscarLocal(const char nomeLocal[]) {
    for (int i = 0; i < totalLocais; i++) {
        if (strcmp(listaLocal[i].getNome(), nomeLocal) == 0)
            return (int)i; 
    }
    return -1;
}

// Adiciona um novo local à lista
void Procedimentos::cadastrarLocal( char nomeLocal[], int x, int y) {
    Local novoLocal(nomeLocal, x, y);
    listaLocal[totalLocais++] = novoLocal; 
}

// Exibe o nome e as coordenadas de cada local cadastrado
void Procedimentos::listarLocais() {
    if (totalLocais == 0) {
        std::cout << "Nenhum local cadastrado.\n";
        return;
    }
    std::cout << "\n--- Lista de Locais ---\n";
    for (int i = 0; i < totalLocais; ++i) {
        std::cout << i + 1 << ". Nome: " << listaLocal[i].getNome()
                  << " ( " << listaLocal[i].getCx() << " , "
                  << listaLocal[i].getCy() << " )" << std::endl; 
    }
}

// Atualiza as informações de um local existente usando a função de busca
void Procedimentos::atualizarLocal(const char nomeLocal[]) {
    int idx = buscarLocal(nomeLocal);
    if (idx == -1) {
        std::cout << "Local não encontrado.\n";
        return;
    }
    char novoNome[100];
    int novoX, novoY;
    std::cout << "Novo nome do local: ";
    std::cin.getline(novoNome, 100);
    std::cout << "Nova coordenada X: ";
    std::cin >> novoX;
    std::cout << "Nova coordenada Y: ";
    std::cin >> novoY;
    std::cin.sync();
    while (std::cin.get() != '\n' && std::cin.good());

    listaLocal[idx].setNome(novoNome);
    listaLocal[idx].setCx(novoX);
    listaLocal[idx].setCy(novoY);

    std::cout << "Local atualizado com sucesso!\n";
}

// Exclui um local da lista usando a função de busca
void Procedimentos::excluirLocal(const char nomeLocal[]) {
    int idx = buscarLocal(nomeLocal);
    if (idx == -1) {
        std::cout << "Local não encontrado.\n";
        return;
    }
    for (int i = idx; i < totalLocais - 1; ++i) {
        listaLocal[i] = listaLocal[i + 1];
    }
    totalLocais--;
    std::cout << "Local excluído com sucesso!\n";
}

// Veículos
// Retorna a posição do veículo encontrado usando a placa como parâmetro
int Procedimentos::buscarVeiculo(const char placa[]) {
    for (int i = 0; i < totalVeiculos; i++) {
        if (strcmp(listaVeiculo[i].getPlaca(), placa) == 0)
            return (int)i;
    }
    return -1;
}

// Adiciona um novo veículo à lista
void Procedimentos::cadastrarVeiculo(const char placaVeiculo[], const char modeloVeiculo[], const char localAtualVeiculo[], int statusVeiculo) {
    Veiculo novoVeiculo;
    novoVeiculo.setPlaca(placaVeiculo);
    novoVeiculo.setModelo(modeloVeiculo);
    novoVeiculo.setLocalAtual(localAtualVeiculo);
    novoVeiculo.setStatus(statusVeiculo);
    listaVeiculo[totalVeiculos] = novoVeiculo;
    totalVeiculos++;
}

//Lista todos os veículos cadastrados, mostrando: placa, modelo, local atual e status
void Procedimentos::listarVeiculos() {
    if (totalVeiculos == 0) {
        std::cout << "Nenhum veículo cadastrado.\n";
        return;
    }
    std::cout << "\n--- Lista de Veículos ---\n";
    for (int i = 0; i < totalVeiculos; ++i) {
        std::cout << i + 1 << ". Placa: " << listaVeiculo[i].getPlaca()
                  << ", Modelo: " << listaVeiculo[i].getModelo()
                  << ", Local Atual: " << listaVeiculo[i].getLocalAtual()
                  << ", Status: " << (listaVeiculo[i].getStatus() ? "Indisponível" : "Disponível") << std::endl;
    }
}

// Atualiza as informações de um veículo existente usando a função de busca
void Procedimentos::atualizarVeiculo(const char placa[]) {
    int idx = buscarVeiculo(placa);
    if (idx == -1) {
        std::cout << "Veículo não encontrado.\n";
        return;
    }
    char novoModelo[100], novoLocal[100];
    int novoStatus;
    std::cout << "Novo modelo do veículo: ";
    std::cin.getline(novoModelo, 100);
    std::cout << "Novo local atual do veículo: ";
    std::cin.getline(novoLocal, 100);
    std::cout << "Novo status do veículo (0 para disponível, 1 para indisponível): ";
    std::cin >> novoStatus;
    std::cin.sync();
    while (std::cin.get() != '\n' && std::cin.good());

    listaVeiculo[idx].setModelo(novoModelo);
    listaVeiculo[idx].setLocalAtual(novoLocal);
    listaVeiculo[idx].setStatus(novoStatus);

    std::cout << "Veículo atualizado com sucesso!\n";
}

// Exclui um veículo da lista usando a função de busca
void Procedimentos::excluirVeiculo(const char placa[]) {
    int idx = buscarVeiculo(placa);
    if (idx == -1) {
        std::cout << "Veículo não encontrado.\n";
        return;
    }
    for (int i = idx; i < totalVeiculos - 1; ++i) {
        listaVeiculo[i] = listaVeiculo[i + 1];
    }
    totalVeiculos--;
    std::cout << "Veículo excluído com sucesso!\n";
}

// Pedidos
// Retorna a posição do pedido encontrado usando o ID como parâmetro
int Procedimentos::buscarPedido(const char id[]) {
    for (int i = 0; i < totalPedidos; i++) {
        if (strcmp(listaPedido[i].getId(), id) == 0)
            return (int)i;
    }
    return -1;
}
// Adiciona um novo pedido à lista
void Procedimentos::cadastrarPedido(const char* idPedido, const char* localOrigem, const char* localDestino, float peso) {
    Pedido novoPedido;
    novoPedido.setId(idPedido);
    novoPedido.setLocalOrigem(localOrigem);
    novoPedido.setLocalDestino(localDestino);
    novoPedido.setPeso(peso);
    listaPedido[totalPedidos] = novoPedido;
    totalPedidos++;
}

// Exclui um pedido da lista usando a função de busca
void Procedimentos::excluirPedido(const char id[]) {
    int idx = buscarPedido(id);
    if (idx == -1) {
        std::cout << "Pedido não encontrado.\n";
        return;
    }
    for (int i = idx; i < totalPedidos - 1; ++i) {
        listaPedido[i] = listaPedido[i + 1];
    }
    totalPedidos--;
    std::cout << "Pedido excluído com sucesso!\n";
}

// Lista todos os pedidos cadastrados, mostrando: ID, local de origem, local de destino e peso
void Procedimentos::listarPedidos() {
    if (totalPedidos == 0) {
        std::cout << "Nenhum pedido cadastrado.\n";
        return;
    }
    std::cout << "\n--- Lista de Pedidos ---\n";
    for (int i = 0; i < totalPedidos; ++i) {
        std::cout << i + 1 << ". ID: " << listaPedido[i].getId()
                  << ", Origem: " << listaPedido[i].getLocalOrigem()
                  << ", Destino: " << listaPedido[i].getLocalDestino()
                  << ", Peso: " << listaPedido[i].getPeso();
    }
}
// Atualiza as informações de um pedido existente usando a função de busca
void Procedimentos::atualizarPedido(const char* id) {
    int idx = buscarPedido(id);
    if (idx == -1) {
        std::cout << "Pedido não encontrado.\n";
        return;
    }
    char novoLocalOrigem[100], novoLocalDestino[100];
    std::cout << "Novo local de origem do pedido: ";
    std::cin.getline(novoLocalOrigem, 100);
    std::cout << "Novo local de destino do pedido: ";
    std::cin.getline(novoLocalDestino, 100);
    std::cin.sync();
    while (std::cin.get() != '\n' && std::cin.good());


    listaPedido[idx].setLocalOrigem(novoLocalOrigem);
    listaPedido[idx].setLocalDestino(novoLocalDestino);

    std::cout << "Pedido atualizado com sucesso!\n";
}

// Realiza a entrega de um pedido, buscando o veículo mais próximo disponível e atualizando o status do veículo e do pedido
void Procedimentos::realizarEntrega() {
    char id[100];
    std::cout << "Digite o ID do pedido: ";
    std::cin.getline(id, 100);

    int idxPedido = buscarPedido(id);
    if (idxPedido == -1) {
        std::cout << "Pedido não encontrado.\n";
        return;
    }

    Pedido& pedido = listaPedido[idxPedido];

    int idxOrigem = buscarLocal(pedido.getLocalOrigem());
    int idxDestino = buscarLocal(pedido.getLocalDestino());

    if (idxOrigem == -1 || idxDestino == -1) {
        std::cout << "Origem ou destino não encontrados.\n";
        return;
    }

    // Encontrar veículo disponível mais próximo da origem
    int idxVeiculoMaisProximo = -1;
    float menorDist = 9999999.0f; // Inicializa com um valor grande
    // Percorre todos os veículos disponíveis e encontra o mais próximo da origem
    for (int i = 0; i < totalVeiculos; i++) {
        if (listaVeiculo[i].getStatus() == 0) { // Disponível
            int idxLocalVei = buscarLocal(listaVeiculo[i].getLocalAtual());
            if (idxLocalVei == -1) continue;
            // Calcula a distância entre o veículo e o local de origem do pedido
            float dist = calcularDistancia(
                listaLocal[idxOrigem].getCx(), listaLocal[idxOrigem].getCy(),
                listaLocal[idxLocalVei].getCx(), listaLocal[idxLocalVei].getCy()
            );
            // Se a distância for menor que a menor distância encontrada até agora atualiza a posição do veículo mais próximo
            if (dist < menorDist) {
                menorDist = dist;
                idxVeiculoMaisProximo = i;
            }
        }
    }

    if (idxVeiculoMaisProximo == -1) {
        std::cout << "Nenhum veículo disponível para entrega.\n";
        return;
    }

    // Atualiza o veículo e o pedido
    Veiculo& veic = listaVeiculo[idxVeiculoMaisProximo];
    veic.setStatus(1); // Veículo ocupado
    veic.setLocalAtual(pedido.getLocalDestino()); // Atualiza o local do veículo

    // Pedido entregue/concluído
    
    std::cout << "Entrega realizada!\n";
    std::cout << "Veículo utilizado: " << veic.getPlaca() << " | Modelo: " << veic.getModelo() << std::endl;
    std::cout << "Origem: " << pedido.getLocalOrigem() << " | Destino: " << pedido.getLocalDestino() << std::endl;
    std::cout << "Distância percorrida: " << menorDist << std::endl;
    veic.setStatus(0); // Veiculo volta a estar disponível
}

// Salva o estado atual das listas em arquivos binários, cada um contendo os dados de locais, veículos e pedidos
void Procedimentos::salvarBackup() {
    FILE *fp;

    fp = fopen("local.dat", "wb");
    if (!fp) { std::cout << "Erro ao salvar locais.\n"; return; }
    for (int i = 0; i < totalLocais; i++)
        fwrite(&listaLocal[i], sizeof(Local), 1, fp);
    fclose(fp);

    fp = fopen("veiculo.dat", "wb");
    if (!fp) { std::cout << "Erro ao salvar veículos.\n"; return; }
    for (int i = 0; i < totalVeiculos; i++)
        fwrite(&listaVeiculo[i], sizeof(Veiculo), 1, fp);
    fclose(fp);

    fp = fopen("pedido.dat", "wb");
    if (!fp) { std::cout << "Erro ao salvar pedidos.\n"; return; }
    for (int i = 0; i < totalPedidos; i++)
        fwrite(&listaPedido[i], sizeof(Pedido), 1, fp);
    fclose(fp);

    std::cout << "Backup salvo com sucesso.\n";
}

// Carrega os dados dos arquivos binários para as listas, limpando as listas antes de carregar o backup
void Procedimentos::carregarBackup() {
    FILE *fp;

    // Limpa as listas antes de carregar o backup
    totalLocais = 0;
    totalVeiculos = 0;
    totalPedidos = 0;

    fp = fopen("local.dat", "rb");
    if (fp) {
        while (fread(&listaLocal[totalLocais], sizeof(Local), 1, fp))
            totalLocais++;
        fclose(fp);
    }

    fp = fopen("veiculos.dat", "rb");
    if (fp) {
        while (fread(&listaVeiculo[totalVeiculos], sizeof(Veiculo), 1, fp))
            totalVeiculos++;
        fclose(fp);
    }

    fp = fopen("pedidos.dat", "rb");
    if (fp) {
        while (fread(&listaPedido[totalPedidos], sizeof(Pedido), 1, fp))
            totalPedidos++;
        fclose(fp);
    }
    std::cout << "Backup restaurado com sucesso.\n";
}

