#include "Lion.h"

std::string Lion::get_noise() {
    std::cout << "Roar" << std::endl;
    return "Roar";
}

int Lion::get_num_legs() {
    std::cout << 4 << std::endl;
    return 4;
}

Lion::~Lion() {
    std::cout << "Destructor Lion" << std::endl;
}