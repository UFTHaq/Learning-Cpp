#include <iostream>
#include "Mystring6.h"

int main() {
    std::cout << std::endl;

    Mystring fahmi{"Fahmi"};
    Mystring thor{"Thor"};
    Mystring haq;

    std::cout << "Enter the third stooge's first name: ";
    std::cin >> haq;

    std::cout << "The three stooges are " << fahmi << ", " << thor << ", and " << haq << std::endl;

    std::cout << "\nEnter the three stooges name separated by space: ";
    std::cin >> fahmi >> thor >> haq;

    std::cout << "The three stooges are " << fahmi << ", " << thor << ", and " << haq << std::endl;

    std::cout << std::endl;
    return 0;
}