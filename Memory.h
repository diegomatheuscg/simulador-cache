#ifndef MEMORY_H 
#define MEMORY_H

#include <string>

class Memory {
protected: 
    std::string nome;

public:
    Memory(int lat, const std::string& n);
};

#endif 