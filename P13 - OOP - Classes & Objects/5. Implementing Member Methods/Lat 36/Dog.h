#ifndef DOG_H
#define DOG_H
#include <string>

#pragma once

class Dog {
private:
    // Attributes
    std::string name;
    std::string species;
    int age;

public:
    // Methods
    void set_name(std::string n);
    std::string get_name();

    void set_species(std::string s);
    std::string get_species();

    void set_age(int a);
    int get_age();

    int get_human_years();

    std::string speak();
};

#endif