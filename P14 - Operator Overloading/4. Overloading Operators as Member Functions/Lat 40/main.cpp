/*
    Operator Overloading as Member Functions

    Given the provided Money class,  please add the overloaded equality operators == and !=
    
    These overloaded operators should return a bool and should be implemented as member functions.
    
    Given 2 Money objects, consider them to be equal if both the dollars and cents attributes are 
    the same for both objects.
    
    First, add the overloaded operator function declarations to the Money class declaration in 
    Money.h
    
    Second, add the overloaded operator function definitions in Money.cpp
    
    These overloaded functions should not modify the objects in any way.
*/

#include <iostream>
#include "Money.h"

int main() {
    std::cout << std::endl;

    Money ukhem{50, 100};
    Money fahmi{51, 100};

    std::cout << (ukhem == fahmi) << std::endl;

    std::cout << std::endl;
    return 0;
}