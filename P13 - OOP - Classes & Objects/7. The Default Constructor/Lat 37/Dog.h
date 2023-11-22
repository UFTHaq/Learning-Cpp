#ifndef DOG_H
#define DOG_H
#include <string>

#pragma once

class Dog {
private:
    std::string name;
    std::string species;
    int age;

public:
    // Constructor
    Dog() {
        name = "None";
        species = "None";
        age = 0;
    }

    Dog(std::string name_dog);

    Dog(std::string name_dog, int age);

    // Methods
    void set_name(std::string);
    std::string get_name();

    void set_age(int a);
    int get_age();

    int get_dog_years();

    std::string speak();
};

#endif