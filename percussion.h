#ifndef TP_1LABA_PERCUSSION_H
#define TP_1LABA_PERCUSSION_H

#include "orchestra.h"

class Percussion : public Orchestra
{
private:
    std::string type;
    std::string name;
    std::string owner;
    double cost;
    int count;
public:
    Percussion(std::string type, std::string name, std::string owner, double cost, int count);
    explicit Percussion(std::string parameters);
    ~Percussion();
    void print();
    std::string getParam();
};

#endif