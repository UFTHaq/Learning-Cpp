#include "Dog_38.h"

Dog_38::Dog_38() {
    name = "None";
    age = 0;
}

Dog_38::Dog_38(std::string name_dog, int age_dog) {
    name = name_dog;
    age = age_dog;
}

void Dog_38::set_name(std::string n) {
    name = n;
}
std::string Dog_38::get_name() {
    return name;
}

void Dog_38::set_age(int a) {
    age = a;
}
int Dog_38::get_age() {
    return age;
}

int Dog_38::get_dog_years() {
    return age * 7;
}

std::string Dog_38::speak() {
    return "Woof";
}