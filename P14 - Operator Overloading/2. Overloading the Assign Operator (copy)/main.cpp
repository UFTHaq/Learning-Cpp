#include <iostream>
#include <vector>
#include "Mystring2.h"

int main() {
    std::cout << std::endl;

    Mystring a{"Hello"};                // overloaded constructor
    Mystring b;                         // no-args constructor
    b = a;                              // copy assignment
                                        // b.operator=(a)
    b = "This is a test";               // b.operator=("This is a test");

    Mystring empty;                     // no-args constructor
    Mystring fahmi{"Fahmi"};            // overloaded constructor
    Mystring stooge {fahmi};            // copy constructor
    Mystring stooges;                   // no-args constructor

    empty = stooge;                     // copy assignment operator

    empty.display();                    // Fahmi : 5
    fahmi.display();                    // Fahmi : 5
    stooge.display();                   // Fahmi : 5
    empty.display();                    // Fahmi : 5

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