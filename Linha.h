#ifndef SIMULADOR_CACHE_LINHA_H
#define SIMULADOR_CACHE_LINHA_H
#include <list>
#include <vector>

#endif

class Linha {
protected:
    int tag;
    int set;//indice
    int offset;
    int dirty_bit;



public:
    Linha(int tag, int estado, int dados, int offset);
};
