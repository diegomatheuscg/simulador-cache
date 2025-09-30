#ifndef RAM_H
#define RAM_H

#include "Memory.h"

class RAM : public Memory { 
private:
    int tamanho;

public:
    RAM(int lat, const std::string& n, int tamanho);
};

#endif 