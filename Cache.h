#ifndef CACHE_H
#define CACHE_H
#include "Memory.h"
#include <string>
#include <unordered_map>
#include <list>
#include <vector>
#include "Linha.h"

class Cache : public Memory {
private:
    std::string nome;
    int cache_size;
    int associativity;
    int set_numbers;
    std::vector<std::list<Linha>> sets;
    Memory *next;

public:
    Cache(int lat, int cache_size, int set_numbers, std::string &n, int associativity, Memory *next);

};

#endif
