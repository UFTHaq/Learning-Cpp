/*
    Adding public methods that access private class attributes

    Given the following Dog class in Dog.h add the following public getter 
    and setter methods that get and set each class attribute as follows:
    
    - get_name returns the name attribute of the dog 
    - set_name sets the name attribute of the dog to the string that is 
      passed into the method.
    - get_age returns the age attribute of the dog
    - set_age sets the age attribute of the dog to the int passed into the method.
    
    Please add your code to the Dog.h file. The exercise.cpp file should NOT be modified.
*/

#include <iostream>
#include "Dog.h"

int main() {
    std::cout << std::endl;

    Dog My_dog;
    My_dog.set_name("Lambros");
    My_dog.set_species("Labrador");
    My_dog.set_age(3);
    
    std::cout << "My dog name is: " << My_dog.get_name() << std::endl;
    std::cout << "The Species is: " << My_dog.get_species() << std::endl;
    std::cout << My_dog.get_name() << " age is: " << My_dog.get_age() << std::endl;

    std::cout << std::endl;
    return 0;
}