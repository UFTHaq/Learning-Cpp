#include <iostream>
#include <vector>
#include "Mystring5.h"

int main() {
    std::cout << std::endl;

    Mystring fahmi {"Fahmi"};
    fahmi.display();

    fahmi = -fahmi;
    fahmi.display();

    std::cout << std::boolalpha << std::endl;
    Mystring haq {"Haq"};
    Mystring stooge = fahmi;

    std::cout << (fahmi == haq) << std::endl;
    std::cout << (fahmi == stooge) << std::endl;

    // Mystring stooges = fahmi + "Haq";
    Mystring stooges = "Fahmi" + haq;
    stooges.display();

    Mystring two_stooges = haq + " " + "Fahmi";
    two_stooges.display();

    Mystring three_stooges = haq + " " + fahmi + " " + "Thor";
    three_stooges.display();

    std::cout << std::endl;
    return 0;
}