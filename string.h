#ifndef TP_1LABA_STRING_H
#define TP_1LABA_STRING_H

#include "orchestra.h"

class String : public Orchestra
{
private:
    std::string name;
    std::string owner;
    double cost;
    int count;
    std::string maker;
    std::string text;
public:
    String(std::string name, std::string owner, double cost, int count, std::string maker, std::string text);
    explicit String(std::string parameters);
    ~String();
    void print();
    std::string getParam();
};


#endif //TP_1LABA_STRING_H
