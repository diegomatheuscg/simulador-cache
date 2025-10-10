#ifndef CACHE_H
#define CACHE_H
#include "Memory.h"
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include "Linha.h"

using namespace std;

class Cache : public Memory {
private:
    int associativity;
    int set_size;
    std::vector<std::list<Linha>> set;

public:
    Cache(
        int l,
        std::string& n, 
        int a,
        int s_size,
        std::vector<std::list<Linha>>& set_
    );

    void print_info(){
        std::cout << "Associatividade: " << associativity << "Tamanho do conjunto: " << set_size << endl;
    }
};

#endif
