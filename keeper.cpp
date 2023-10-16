#include "keeper.h"
#include "string.h"
#include "percussion.h"
#include "brass.h"
#include <fstream>

Keeper::Keeper()
{
    instruments = nullptr;
    numInstruments = 0;
    std::cout << "Keeper default constructor called\n";
}

Keeper::~Keeper()
{
    for(int i = 0; i < numInstruments; i++)
    {
        delete instruments[i];
    }
    delete[] instruments;

    std::cout << "Keeper default destructor called\n";
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
    if (numInstruments == 0)
        throw Exception("There are no objects!\n");
    for (int i = 0; i < numInstruments; i++)
    {
        instruments[i]->print();
    }
}


void Keeper::remove(int index)
{
    if (index >= numInstruments || index < 0)
        throw Exception("There is no such object!\n");
    Orchestra** newInstruments = new Orchestra*[numInstruments - 1];
    int j = 0;
    for(int i = 0; i < numInstruments; i++)
    {
        if(i != index)
        {
            newInstruments[j++] = instruments[i];
        }
    }
    delete[] instruments;
    instruments = newInstruments;
    numInstruments--;
}

void Keeper::save(std::string filename)
{
    std::ofstream file(filename);
    file << numInstruments << std::endl;
    for (int i = 0; i < numInstruments; i++) {
        file << instruments[i]->getParam() << "\n";

    }
    file.close();
}

void Keeper::load(std::string filename)
{
    std::ifstream file(filename);
    std::string s;
    while (getline(file, s))
    {
        std::string instrument, parameters;
        instrument = s.substr(0, s.find(' '));
        s.erase(0, s.find(' ') + 1);
        parameters = s;
        std::cout << parameters << std::endl;
        if (instrument == "String")
        {
            String *str;
            str = new String(parameters);
            this->add(str);
        }
        if (instrument == "Percussion")
        {
            Percussion *perc;
            perc = new Percussion(parameters);
            this->add(perc);
        }
        if (instrument == "Brass")
        {
            Brass *brass;
            brass = new Brass(parameters);
            this->add(brass);
        }
    }
    file.close();
}
