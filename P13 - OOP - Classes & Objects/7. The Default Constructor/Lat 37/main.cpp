/*
    Add a Default Constuctor to an Existing Class

    Given the Dog class in Dog.h, add a default no-args constructor that 
    initializes the dog's name to "None" and the dog's age to zero.
    
    Please add your code to the Dog.h file.
*/

#include <iostream>
#include <string>
#include "Dog.h"

int main() {
    std::cout << std::endl;

    Dog intel_dog;
    std::cout << intel_dog.get_name() << std::endl;

    intel_dog.set_name("Horu");
    intel_dog.set_age(4);
    std::cout << intel_dog.get_name() << std::endl;
    std::cout << intel_dog.get_age() << std::endl;
    std::cout << intel_dog.get_dog_years() << std::endl;
    std::cout << intel_dog.speak() << std::endl;
    std::cout << std::endl;

    Dog fbi_dog("Jake");
    std::cout << std::endl;

    Dog cia_dog("Albert", 4);
    std::cout << std::endl;

    Dog *densus_dog = new Dog("Slamet", 5);
    std::cout << densus_dog->get_name() << std::endl;
    std::cout << densus_dog->get_age() << std::endl;
    std::cout << (*densus_dog).get_dog_years() << std::endl;

    delete densus_dog;

   std::cout << std::endl;
    return 0;
}