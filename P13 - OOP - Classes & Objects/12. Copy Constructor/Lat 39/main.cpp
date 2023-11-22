/*
    Add a Copy Constructor to an Existing Class

    Given the Dog class defined in Dog.h, add a Copy constructor.

    The copy constructor should copy the attributes from one object 
    to another.
    Also, please display, "Copy Constructor" to cout in the body of 
    your copy constructor. Do not follow the output statement with '\n' or endl

    The copy constructor should allow us to create  Dog objects as follows:

        Dog spot {"Spot", 5};   // Overloaded constuctor
        Dog twin {spot};        // Copy constructor, twin will be a copy of spot


Please add your code to the Dog.h file.
*/

#include <iostream>
#include <string>
#include "Dog_39.h"

int main() {
    std::cout << std::endl;

    Dog spot{"Spot", 5};
    
    Dog twin{spot};

    std::cout << std::endl;
    return 0;
}