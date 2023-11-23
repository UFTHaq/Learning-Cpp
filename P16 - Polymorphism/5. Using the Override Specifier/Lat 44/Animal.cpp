#include "Animal.h"

Animal::Animal(const std::string &name, int age)
    : name{name}, age{age} {
        std::cout << "Constructor Animal - " << name << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor Animal - " << name << std::endl;
}

std::string Animal::get_name() {
    std::cout << name << std::endl;
    return name;
}

int Animal::get_age() {
    std::cout << age << std::endl;
    return age;
}
