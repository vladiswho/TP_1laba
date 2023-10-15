#ifndef TP_1LABA_ORCHESTRA_H
#define TP_1LABA_ORCHESTRA_H

#include <iostream>

class Orchestra
{
public:
    Orchestra(){std::cout << "Orchestra default constructor called" << std::endl;}
    virtual ~Orchestra() {std::cout << "Orchestra destructor called" << std::endl;}
    virtual void print() = 0;
};

#endif