#ifndef DOG_H
#define DOG_H
#include "Animal.h"

#pragma once

class Dog: public Animal {
public:
    // Constructor
    Dog(const std::string &name, int age);
    virtual ~Dog();

    // Methods
    virtual std::string get_noise() override;
    virtual int get_num_legs() override;

};

#endif