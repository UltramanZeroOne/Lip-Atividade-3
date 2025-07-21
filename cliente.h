#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

struct Cliente {
    int id;
    std::string nome;
    std::string telefone;
    static int nextId;
    Cliente();
};

#endif