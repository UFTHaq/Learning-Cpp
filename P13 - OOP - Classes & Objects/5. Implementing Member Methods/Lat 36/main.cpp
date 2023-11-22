/*
    Add more public methods to an existing class

    Given an existing Dog class in Dog.h, add the following public method 
    to the class:
    
    - get_human_years() return the dog's age * 7
    - speak()  returns the std::string "Woof"

    Please add your code in the Dog.h file.
*/

#include <iostream>
#include "Dog.h"

int main() {
    std::cout << std::endl;

    Dog My_Dog;
    My_Dog.set_name("Burka");
    My_Dog.set_species("Golden");
    My_Dog.set_age(3);

    std::cout << "My dog name is: " << My_Dog.get_name() << std::endl;
    std::cout << "The species is: " << My_Dog.get_species() << std::endl;
    std::cout << My_Dog.get_name() << " age is: " << My_Dog.get_age() << std::endl;
    std::cout << "But in human years, " << My_Dog.get_name() << " age is: " << My_Dog.get_human_years() << std::endl;
    std::cout << My_Dog.get_name() << ": " << My_Dog.speak() << std::endl;
    std::cout << std::endl;

    Dog *His_Dog {new Dog};
    His_Dog->set_name("Ulka");
    His_Dog->set_species("Chihuahua");
    (*His_Dog).set_age(2);

    std::cout << "His dog name is: " << His_Dog->get_name() << std::endl;
    std::cout << "The species is : " << (*His_Dog).get_species() << std::endl;
    std::cout << His_Dog->get_name() << " age is: " << His_Dog->get_age() << std::endl;
    std::cout << "But in human years, " << (*His_Dog).get_name() << " age is: " << His_Dog->get_human_years() << std::endl;
    std::cout << His_Dog->get_name() << ": " << His_Dog->speak() << std::endl;

    delete His_Dog;

    std::cout << std::endl;
    return 0;
}