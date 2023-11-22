#include "Dog_39.h"

// Constructors
Dog::Dog(std::string name_dog, int age_dog)
    : name{name_dog}, age{age_dog} {

}

// Copy Constructors Cara Initialization
Dog::Dog(const Dog &source)
    : name{source.name}, age{source.age} {
        std::cout << "Copy Constructor - made copy of: " << source.name << std::endl;

}

// // Copy Constructor Cara Delegating
// Dog::Dog(const Dog &source) 
//     : Dog{source.name, source.age} {
//         std::cout << "Copy Constructor - made copy of: " << source.name << std::endl;
// }

// Destructors
Dog::~Dog() {
    std::cout << "Destructor called for: " << name << std::endl;
    std::cout << std::endl;
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
    return "Wooof.";
}