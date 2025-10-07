#include "Memory.h"
#include "Cache.h"
#include <iostream>
#include <unordered_map>
#include <list>

Memory::Memory(int lat, const std::string& n) : latencia(lat), nome(n) {

}

Cache::Cache(int lat, const std::string& n, Memory* proximo)
    : Memory(lat, n), proximo_nivel_(proximo) {
}



void Memory::exibirInfo() const {


}