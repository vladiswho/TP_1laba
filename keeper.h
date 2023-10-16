#ifndef TP_1LABA_KEEPER_H
#define TP_1LABA_KEEPER_H

#include "orchestra.h"
#include "Exception.h"

class Keeper {
private:
    Orchestra** instruments;
    int numInstruments;
public:
    Keeper();
    ~Keeper();
    void add(Orchestra* instrument);
    void print();
    void remove(int index);
    void save(std::string fileName);
    void load(std::string fileName);
};

#endif