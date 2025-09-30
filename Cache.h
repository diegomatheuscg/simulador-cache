#ifndef CACHE_H
#define CACHE_H

#include "Memory.h"

class Cache : public Memory{
    private:
        Memory *proximo_nivel_;

    public:
        Cache(int lat, const std::string &n, Memory *proximo);
};

#endif