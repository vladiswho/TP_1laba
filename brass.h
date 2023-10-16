#ifndef TP_1LABA_BRASS_H
#define TP_1LABA_BRASS_H

#include "orchestra.h"

class Brass : public Orchestra
{
private:
    std::string name;
    std::string owner;
    double cost;
    int count;
    std::string maker;
    std::string defects;
public:
    Brass(std::string name, std::string owner, double cost, int count, std::string maker, std::string defects);
    explicit Brass(std::string parameters);
    ~Brass();
    void print();
    std::string getParam();
};


#endif //TP_1LABA_BRASS_H
