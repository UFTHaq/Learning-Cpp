#include "Dog.h"

// Constuctors
Dog::Dog(std::string name_dog) {
    name = name_dog;
    species = "None";
    age = 0;
}

Dog::Dog(std::string name_dog, int age_dog) {
    name = name_dog;
    species = "None";
    age = age_dog;
}

// Methods
void Dog::set_name(std::string n) {
    name = n;
}
std::string Dog::get_name() {
    return name;
}

void Dog::set_age(int a) {
    age = a;
}
int Dog::get_age() {
    return age;
}

int Dog::get_dog_years() {
    return age * 7;
}

std::string Dog::speak() {
    return "Woof";
}