// IF ELSE STATEMENT - CAN YOU DRIVE?
/*
    In this exercise you will use an simple if/else statement to decide 
    if someone can drive. Let's assume that anyone 16 or older can legally 
    drive. If the person can legally drive, your program should display, 
    "Yes - you can drive!" using a cout statement. You do not have to 
    provide a '\n' or endl. If the person cannot legally drive, then your 
    program should display, "Sorry, come back in n  years", where n is how 
    many years until the person turns 16 year old. The age  will be provided 
    for you, you do NOT need to declare age . Our test cases will provide 
    different values for age  to test your code.
*/

#include <iostream>

int main() {
    std::cout << std::endl;

    int driver_age{};
    const int minimum_age{16};

    std::cout << "Enter you age: ";
    std::cin >> driver_age;

    if (driver_age >= minimum_age) {
        std::cout << "Yes - you can drive!" << std::endl;
    } else {
        int diff{minimum_age - driver_age};
        std::cout << "Sorry, come back in " << diff << " years" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}