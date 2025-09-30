#include "Memory.h"
#include <iostream>


Memory::Memory(int lat, const std::string& n) : latencia(lat), nome(n) {

}

void Memory::exibirInfo() const {
    std::cout << "Nome: " << nome << ", Latencia: " << latencia << " ciclos" << std::endl;
}