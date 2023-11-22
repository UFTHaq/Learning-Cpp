#include <iostream>
#include <vector>
#include "Mystring3.h"

int main() {
    std::cout << std::endl;

    Mystring a{"Hello"};                // Overloaded constructor
    a = Mystring{"Hola"};               // Overloaded constructor then move assignment
    a = "Bonjour";                      // Overloaded constructor then move assignment

    Mystring empty;                     // No-args Constructor
    Mystring fahmi{"Fahmi"};            // Overloaded Constructor
    Mystring stooge {fahmi};            // Copy Constructor
    Mystring stooges;                   // No-args Constructor

    empty = stooge;                     // Copy assignment operator
                                        // stooge is an L-VALUE

    empty = "Thor";                    // Move assignment operator
                                        // "Thor" is an R-VALUE

    empty.display();
    fahmi.display();
    stooge.display();
    empty.display();

    stooges = "Ukhem, Fahmi, Thor";
    stooges.display();

    std::vector<Mystring> stooges_vec;
    stooges_vec.push_back("Ukhem");
    stooges_vec.push_back("Fahmi");
    stooges_vec.push_back("Haq");
    std::cout << std::endl;

    std::cout << "=====  Loop 1  =================================" << std::endl;
    for (const auto &s: stooges_vec) {
        s.display();
    }
    std::cout << std::endl;

    std::cout << "=====  Loop 2  =================================" << std::endl;
    for (auto &s: stooges_vec) {
        s = "Changed";
    }
    std::cout << std::endl;

    std::cout << "=====  Loop 3  =================================" << std::endl;
    for (const auto &s: stooges_vec) {
        s.display();
    }

    std::cout << std::endl;

    return 0;
}