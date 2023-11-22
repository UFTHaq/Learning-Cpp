#include <iostream>
#include "Mystring1.h"

int main() {
    std::cout << std::endl;

    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};

    empty.display();
    larry.display();
    stooge.display();

    std::cout << std::endl;
    return 0;
}