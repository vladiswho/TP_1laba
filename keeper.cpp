#include "keeper.h"
#include <fstream>

Keeper::Keeper()
{
    instruments = nullptr;
    numInstruments = 0;
}

Keeper::~Keeper()
{
    // cleanup instruments
    for(int i = 0; i < numInstruments; i++)
    {
        delete instruments[i];
    }
    delete[] instruments;
}

void Keeper::add(Orchestra* instrument)
{
    Orchestra** newInstruments = new Orchestra*[numInstruments + 1];
    for(int i = 0; i < numInstruments; i++)
    {
        newInstruments[i] = instruments[i];
    }
    newInstruments[numInstruments] = instrument;
    numInstruments++;
    delete[] instruments;
    instruments = newInstruments;
}

void Keeper::print()
{
    for (int i = 0; i < numInstruments; i++)
    {
        instruments[i]->print();
    }
}

/*
void Keeper::remove(Orchestra* instrument) {
    int indexToRemove = -1;
    for(int i = 0; i < numInstruments; i++) {
        if(instruments[i] == instrument) {
            indexToRemove = i;
            break;
        }
    }

    if(indexToRemove == -1) {
        throw "Instrument not found";
    }

    Orchestra** newInstruments = new Orchestra*[numInstruments - 1];

    int j = 0;
    for(int i = 0; i < numInstruments; i++) {
        if(i != indexToRemove) {
            newInstruments[j++] = instruments[i];
        }
    }
    delete[] instruments;
    instruments = newInstruments;
    numInstruments--;
}

void Keeper::save(std::string filename) {
    std::ofstream file(filename);
    file << numInstruments << std::endl;
    for (int i = 0; i < numInstruments; i++) {
        instruments[i]->print();

    }
    file.close();
}

void Keeper::load(std::string filename) {
    std::ifstream file(filename);
    int count;
    file >> count;
    for (int i = 0; i < count; i++) {
    }
    file.close();
    numInstruments = count;
}*/
