#ifndef MEMORY_H 
#define MEMORY_H

#include <string>

class Memory {
protected:
    int latency;
    std::string name;
    Memory *next;
    Memory *previous;
public:
    Memory(int lat, std::string n, Memory* next_, Memory* previous_)
    : latency(lat), name(n), next(next_), previous(previous_) {};

    virtual ~Memory(){}
};

#endif 