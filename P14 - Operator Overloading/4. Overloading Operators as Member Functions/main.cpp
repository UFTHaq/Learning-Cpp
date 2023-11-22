#include "Mystring4.h"
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::endl;

    std::cout << std::boolalpha << std::endl;

    Mystring fahmi {"Fahmi"};
    Mystring haq {"Haq"};

    Mystring stooge = fahmi;
    fahmi.display();                                                // Fahmi
    haq.display();                                                  // Haq

    std::cout << (fahmi == haq) << std::endl;                       // false
    std::cout << (fahmi == stooge) << std::endl;                    // true

    fahmi.display();                                                // Fahmi
    Mystring fahmi2 = -fahmi;
    fahmi2.display();                                               // fahmi

    Mystring stooges = fahmi + "Haq";                               // ok with member function
    // Mystring stooges = "Fahmi" + "Haq";                          // Compiler error

    Mystring two_stooges = haq + " " + "Fahmi";
    two_stooges.display();

    Mystring three_stooges = haq + " " + fahmi + " " + "Thor";
    three_stooges.display();                                        // Haq Fahmi Thor

    std::cout << std::endl;
    return 0;
}