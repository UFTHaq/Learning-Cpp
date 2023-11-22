// FOR LOOP - SUM OF ODD/GANJIL INTEGERS
/*
    Write code that uses a for loop to calculate the sum of 
    the odd integers from 1 to 15, inclusive. The final result 
    should be stored in an integer variable named sum .
*/

#include <iostream>

int main() {
    std::cout << std::endl;

    int sum{};

    for (int i{1}; i <= 15; i++) {
        if (i % 2 == 1) {
            std::cout << i;
            sum += i;
        } else {
            std::cout << " + ";
        }
    }
    std::cout << " = " << sum << std::endl;

    std::cout << std::endl;
    return 0;
}