#include "string.h"
#include "orchestra.h"

String::String(std::string name, std::string owner, double cost, int count, std::string maker, std::string text)
{
    this->name = name;
    this->owner = owner;
    this->cost = cost;
    this->count = count;
    this->maker = maker;
    this->text = text;

    std::cout << "String default constructor called\n";
}

String::String(std::string parameters)
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
    this->text = parameters.substr(0, parameters.size());

    std::cout << "String load-from-file constructor called\n";
}

String::~String()
{
    std::cout << "String default destructor called\n";
}

void String::print() {
    std::cout << "String instrument: " << "\n";
    std::cout << name << " " << owner << " " << cost << " " << count << " " << maker << " " << text << " " << "\n";
}

std::string String::getParam() {
    std::string parameters;
    parameters = "String " + name + " " + owner + " " + std::to_string(cost) + " "
            + std::to_string(count) + " " + maker + " " + text;
    return parameters;
}
