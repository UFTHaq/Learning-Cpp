#include <iostream>

int main() {
    int number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> number;
    std::cout << "Amazing!! That's my favorite number too!!" << std::endl;
    std::cout << "No really!!, " << number << " is my favorite number!";
    return 0;
}