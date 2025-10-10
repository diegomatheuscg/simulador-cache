#ifndef SIMULADOR_CACHE_LINHA_H
#define SIMULADOR_CACHE_LINHA_H
#include <list>
#include <vector>

#endif

struct Linha {
    int tag;
    bool dirty_bit;
    std::vector<uint8_t> data;

    Linha(){
        tag = 0;
        dirty_bit = false;
        data.resize(64);
    }
};
