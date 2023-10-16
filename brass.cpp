#include "brass.h"
#include "orchestra.h"

Brass::Brass(std::string name, std::string owner, double cost, int count, std::string maker, std::string defects)
{
    this->name = name;
    this->owner = owner;
    this->cost = cost;
    this->count = count;
    this->maker = maker;
    this->defects = defects;

    std::cout << "Brass default constructor called\n";
}

Brass::Brass(std::string parameters)
{
    this->name = parameters.substr(0, parameters.find(' '));
    parameters.erase(0, parameters.find(' ') + 1);
    this->owner = parameters.substr(0, parameters.find(' '));
    parameters.erase(0, parameters.find(' ') + 1);
    this->cost = stod(parameters.substr(0, parameters.find(' ')));
    parameters.erase(0, parameters.find(' ') + 1);
    this->count = stoi(parameters.substr(0, parameters.find(' ')));
    parameters.erase(0, parameters.find(' ') + 1);
    this->maker = parameters.substr(0, parameters.find(' '));
    parameters.erase(0, parameters.find(' ') + 1);
    this->defects = parameters.substr(0, parameters.size());

    std::cout << "Brass load-from-file constructor called\n";
}

Brass::~Brass()
{
    std::cout << "Brass default destructor called\n";
}

void Brass::print() {
    std::cout << "Brass instrument: " << "\n";
    std::cout << name << " " << owner << " " << cost << " " << count << " " << maker << " " << defects << " " << "\n";
}

std::string Brass::getParam() {
    std::string parameters;
    parameters = "String" + name + " " + owner + " " + std::to_string(cost) + " "
                 + std::to_string(count) + " " + maker + " " + defects;
    return parameters;
}