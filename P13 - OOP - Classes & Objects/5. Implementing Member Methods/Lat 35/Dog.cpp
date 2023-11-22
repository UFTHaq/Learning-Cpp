#include "Dog.h"

void Dog::set_name(std::string n) {
    name = n;
}
std::string Dog::get_name() {
    return name;
}

void Dog::set_species(std::string s) {
    species = s;
}
std::string Dog::get_species() {
    return species;
}

void Dog::set_age(int a) {
    age = a;
}
int Dog::get_age() {
    return age;
}