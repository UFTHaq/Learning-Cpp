#ifndef DOG_39_H
#define DOG_39_H
#include <string>
#include <iostream>

#pragma once

class Dog {
private:
    std::string name;
    int age;

public:
    // Constructors
    Dog(std::string name_dog, int age_dog);
    // Copy Constructor
    Dog(const Dog &source);
    // Destructors
    ~Dog();

    // Methods
    void set_name(std::string n);
    std::string get_name();

    void set_age(int a);
    int get_age();

    int get_dog_years();

    std::string speak();

};

#endif