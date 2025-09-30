#include "Cache.h"

Cache::Cache(int lat, const std::string& n, Memory* proximo) 
    : Memory(lat, n), proximo_nivel_(proximo) {
}