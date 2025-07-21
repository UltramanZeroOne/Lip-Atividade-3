#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H

#include <vector>
#include "corretor.h"
#include "imovel.h"

void agendarVisitas(const std::vector<Corretor>& corretores, const std::vector<Imovel>& imoveis);

#endif