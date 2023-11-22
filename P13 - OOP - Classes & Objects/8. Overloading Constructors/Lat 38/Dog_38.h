#ifndef DOG_38_H
#define DOG_38_H
#include <string>

#pragma once

class Dog_38 {
private:
    std::string name;
    int age;

public:
    // Constructors
    Dog_38();
    Dog_38(std::string name_dog, int age_dog);

    // Methods
    void set_name(std::string n);
    std::string get_name();
    void set_age(int a);
    int get_age();
    int get_dog_years();
    std::string speak();
};

#endif