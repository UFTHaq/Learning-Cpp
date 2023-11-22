#include <iostream>

int main() {
    int favorite_number;
    std::cout << "A: What your favorite number between 1 and 100?" << std::endl;
    std::cout << "B: My favorite number is: "; 
    std::cin >> favorite_number;
    std::cout << "A: Whats.. " << favorite_number << "? " << "That's my favorite number too." << std::endl; 
    return 0;
}