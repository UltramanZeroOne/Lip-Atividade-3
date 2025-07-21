#include <iostream>
#include <vector>
#include "corretor.h"
#include "cliente.h"
#include "imovel.h"
#include "agendamento.h"

int main() {
    int numCorretores;
    std::cin >> numCorretores;

    std::vector<Corretor> corretores;
    for (int i = 0; i < numCorretores; ++i) {
        Corretor c;
        std::cin >> c.telefone >> c.avaliador >> c.lat >> c.lng;
        std::getline(std::cin >> std::ws, c.nome);
        c.id = i + 1;
        corretores.push_back(c);
    }

    int numClientes;
    std::cin >> numClientes;

    std::vector<Cliente> clientes;
    for (int i = 0; i < numClientes; ++i) {
        Cliente c;
        std::cin >> c.telefone;
        std::getline(std::cin >> std::ws, c.nome);
        c.id = i + 1;
        clientes.push_back(c);
}

int numImoveis;
    std::cin >> numImoveis;

    std::vector<Imovel> imoveis;
    for (int i = 0; i < numImoveis; ++i) {
        Imovel im;
        std::string tipoStr;
        std::cin >> tipoStr >> im.proprietarioId >> im.lat >> im.lng >> im.preco;
        std::getline(std::cin >> std::ws, im.endereco);
        if (tipoStr == "Casa") im.tipo = Casa;
        else if (tipoStr == "Apartamento") im.tipo = Apartamento;
        else im.tipo = Terreno;
        im.id = i + 1;
        imoveis.push_back(im);
    }

    // Chama a função que agenda e imprime a saída
    agendarVisitas(corretores, imoveis);

    return 0;
}