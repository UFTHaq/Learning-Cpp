#include <iostream>

int main() {
    std::cout << std::endl;

    for (int i = 1; i <=100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << " : FizzBuzz" << std::endl;
        } else if (i % 3 == 0) {
            std::cout << i << " : Fizz" << std::endl;
        } else if (i % 5 == 0) {
            std::cout << i << " : Buzz" << std::endl;
        } else {
            std::cout << i << " : " << i << std::endl;
        }
    }

    std::cout << std::endl;
    return 0;
}