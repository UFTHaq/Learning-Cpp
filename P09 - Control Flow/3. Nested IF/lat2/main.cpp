// NESTED IF STATEMENTS - CAN YOU DRIVE?
/*
    In this exercise you will use nested if statements to decide if someone 
    can drive. Let's assume that anyone 16 or older can legally drive, but 
    they must also own a car to drive. If the person is not 16 or older then 
    you should display, "Sorry, come back in n years and be sure you own a car 
    when you come back.", where n is how many years until the person turns 
    16 year old. If the person is 16 or older but they do NOT own a car, 
    then your program should display, "Sorry, you need to buy a car before you 
    can drive!". If the person is 16 or older and they DO own a car, then your 
    program should display, "Yes - you can drive!" The age  will be provided 
    for you, you do NOT need to declare age .We will also automatically provide 
    a boolean variable named has_car  which will be true  if the person owns 
    a car or false  otherwise.  Our test cases will provide different values 
    for age and has_car to test your code. Please do NOT provide '\n' or endl  
    in your display statements.
*/

#include <iostream>

int main() {
    std::cout << std::endl;
    std::cout << std::boolalpha;

    const int minimum_age{16};
    int driver_age{};
    bool has_car{true};

    std::cout << "Enter your age: ";
    std::cin >> driver_age;

    int diff{minimum_age - driver_age};

    if (driver_age >= minimum_age) {
        if (has_car) {
            std::cout << "Yes - you can drive!" << std::endl;
        } else {
            std::cout << "Sorry, you need to buy a car before you can drive!" << std::endl;
        }
    } else {
        std::cout << "Sorry, come back in " << diff << " years" << std::endl;
        std::cout << "and be sure you own a car when you come back." << std::endl;
    }

    std::cout << std::endl;
    return 0;
}