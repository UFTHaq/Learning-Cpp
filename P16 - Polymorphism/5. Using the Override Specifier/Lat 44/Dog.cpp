#include "Dog.h"

Dog::Dog(const std::string &name, int age)
    : Animal{name, age} {
        std::cout << "Constructor Dog - " << name << std::endl;
    }

Dog::~Dog() {
    std::cout << "Destructor Dog - " << name << std::endl;
}

std::string Dog::get_noise() {
    std::cout << "Woof" << std::endl;
    return "Woof";
}

int Dog::get_num_legs() {
    std::cout << 4 << std::endl;
    return 4;
}
