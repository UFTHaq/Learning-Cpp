/*
    Operator Overloading as Non-member Functions

    Given the provided Money class,  please add the overloaded  + operator so that it 
    will add two Money objects together and return a Money object representing their sum.
    
    This overloaded operator should return a Money object and should be implemented as a 
    non-member friend function.
    
    First, add the overloaded operator function declaration to the Money class declaration 
    in Money.h
    
    Second, add the overloaded operator function definition in Money.cpp
    
    This overloaded operator function should not modify the objects in any way.


*/

#include <iostream>
#include "Money2.h"

int main() {
    std::cout << std::endl;

    Money ukhem{50, 100};
    Money fahmi{51, 100};

    ukhem = ukhem + fahmi;

    std::cout << std::endl;
    return 0;
}