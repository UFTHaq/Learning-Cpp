#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

#pragma once

class Animal {
protected:
    std::string name;
    int age;

public:
    // Constructor Prototypes
    Animal(const std::string &name, int age);
    // Destructor
    virtual ~Animal();

    // Method Prototypes

    // Pure virtual functions
    virtual std::string get_noise() = 0;
    virtual int get_num_legs() = 0;

    // virtual function getters
    virtual std::string get_name();
    virtual int get_age();
};

#endif