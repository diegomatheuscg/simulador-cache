#ifndef MEMORY_H
#define MEMORY_H

#include <string>

class Memory
{
protected:
    int latency;
    std::string name;

public:
    Memory(int lat, std::string n);

    virtual ~Memory() {}

    virtual int read(int instruction);
    virtual void write();
};

#endif