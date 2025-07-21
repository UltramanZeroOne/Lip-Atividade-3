#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>

enum TipoImovel { Casa, Apartamento, Terreno };

struct Imovel {
    int id;
    TipoImovel tipo;
    int proprietarioId;
    double lat, lng, preco;
    std::string endereco;
    static int nextId;
    Imovel();
};

#endif