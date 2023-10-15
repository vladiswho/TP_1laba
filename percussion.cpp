#include "percussion.h"
#include "orchestra.h"

Percussion::Percussion(std::string type, std::string name, std::string owner, double cost, int count)
{
    this->type = type;
    this->name = name;
    this->cost = cost;
    this->count = count;
    this->owner = owner;

    std::cout << "Percussion default constructor called\n";
}

Percussion::~Percussion()
{
    std::cout << "Percussion default destructor called\n";
}

void Percussion::print() {
    std::cout << "Percussion details: " << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Owner: " << owner << std::endl;
    std::cout << "Cost: " << cost << std::endl;
    std::cout << "Count in orchestra: " << count << std::endl;
}

/*std::string Percussion::getName() {
    return name;
}

void Percussion::save(std::ofstream& file) {
    file << type << "\n";
    file << name << "\n";
    file << cost << "\n";
    file << count << "\n";
    file << owner << "\n";
}*/
