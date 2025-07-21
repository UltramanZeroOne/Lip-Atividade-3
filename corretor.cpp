#include "corretor.h"

int Corretor::nextId = 1;  // Definição do membro estático

Corretor::Corretor() {
    id = nextId++;
}