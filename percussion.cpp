#include "percussion.h"
#include "orchestra.h"

Percussion::Percussion(std::string type, std::string name, std::string owner, double cost, int count)
{
    this->type = type;
    this->name = name;
    this->owner = owner;
    this->cost = cost;
    this->count = count;

    std::cout << "Percussion default constructor called\n";
}

Percussion::Percussion(std::string parameters)
{
    this->type = parameters.substr(0, parameters.find(' '));
    parameters.erase(0, parameters.find(' ') + 1);
    this->name = parameters.substr(0, parameters.find(' '));
    parameters.erase(0, parameters.find(' ') + 1);
    this->owner = parameters.substr(0, parameters.find(' '));
    parameters.erase(0, parameters.find(' ') + 1);
    this->cost = stod(parameters.substr(0, parameters.find(' ')));
    parameters.erase(0, parameters.find(' ') + 1);
    this->count = stoi(parameters.substr(0, parameters.size()));

    std::cout << "Percussion load-from-file constructor called\n";
}

Percussion::~Percussion()
{
    std::cout << "Percussion default destructor called\n";
}

void Percussion::print() {
    std::cout << "Percussion instrument: " << "\n";
    std::cout << type << " " << name << " " << owner << " " << cost << " " << count << "\n";
}

std::string Percussion::getParam() {
    std::string parameters;
    parameters = "Percussion " + type + " " + name + " " + owner + " " + std::to_string(cost) + " "
                 + std::to_string(count);
    return parameters;
}
