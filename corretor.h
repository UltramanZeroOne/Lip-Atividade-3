#ifndef CORRETOR_H
#define CORRETOR_H

#include <string>

struct Corretor {
    static int nextId;      // Declara variável estática
    int id;
    std::string nome;
    std::string telefone;
    bool avaliador;
    double lat, lng;

    Corretor();             // Declara construtor
};

#endif
