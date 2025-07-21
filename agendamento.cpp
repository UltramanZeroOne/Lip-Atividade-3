#include "agendamento.h"
#include <iostream>
#include <iomanip>     // Para setw e setfill
#include <cmath>       // Para cálculos com distância

void agendarVisitas(const std::vector<Corretor>& corretores, const std::vector<Imovel>& imoveis) {
    for (const auto& corretor : corretores) {
        std::cout << "Corretor " << corretor.id << std::endl;
        // Exemplo de saída (você substituirá depois com lógica real)
        std::cout << "09:00 Imóvel 1" << std::endl << std::endl;
    }
}
