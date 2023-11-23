/*
    C++ LAMBDA EXPRESSIONS
    ===========================================================================================
    A Simple lambda expression

        [] () {std::cout << "Hi";};
*/

#include <iostream>

int main() {
    std::cout << std::endl;

    auto lambda = [] (int x) {std::cout << "Hi "<< x << std::endl;};

    lambda(10);
    lambda(111);

    std::cout << std::endl;
    return 0;
}