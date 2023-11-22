/*
    Add an Overloaded Constructors to an Existing Class

    Given the Dog class defined in Dog.h, add an overloaded constructor that 
    expect a std::string and int as parameters.
    The constructor should allow us to create  Dog objects as follows:

        Dog fido {"Fido", 4};
        Dog spot {"Spot", 5};

    Please add your code to the Dog.h file.
*/

#include <iostream>
#include <string>
#include "Dog_38.h"

int main() {
    std::cout << std::endl;

    Dog_38 cia;
    std::cout << cia.get_name() << " " << cia.get_age() << " " << cia.get_dog_years() << std::endl;

    Dog_38 fido("Fido", 4);
    std::cout << fido.get_name() << " " << fido.get_age() << " " << fido.get_dog_years() << std::endl;

    Dog_38 spot("Spot", 5);
    std::cout << spot.get_name() << " " << spot.get_age() << " " << spot.get_dog_years() << std::endl;

    std::cout << std::endl;
    return 0;
}