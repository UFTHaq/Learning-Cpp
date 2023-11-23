#include <iostream>

int main() {
    std::cout << std::endl;

    std::cout << std::boolalpha;      // Display true or false
    // std::cout << std::noboolalpha;    // Display 1 or 0 (Default)

    bool equal_result {false};
    bool not_equal_result {false};

    std::cout << "|----------------------------------------------" << std::endl;

    // int num1 {}, num2 {};
    // std::cout << "| Enter 2 Integers separated by space: ";
    // std::cin >> num1 >> num2;
    // equal_result = (num1 == num2);
    // not_equal_result = (num1 != num2);
    // std::cout << "| Comparison result (equals): " << equal_result << std::endl;
    // std::cout << "| Comparison result (not equals): " << not_equal_result << std::endl;

    // std::cout << "|----------------------------------------------" << std::endl;

    // char char1 {}, char2 {};
    // std::cout << "| Enter 2 characters separated by space: ";
    // std::cin >> char1 >> char2;
    // equal_result = (char1 == char2);
    // not_equal_result = (char1 != char2);
    // std::cout << "| Comparison result (equals): " << equal_result << std::endl;
    // std::cout << "| Comparison result (not equals): " << not_equal_result << std::endl;

    // std::cout << "|----------------------------------------------" << std::endl;

    double double1 {}, double2 {};
    std::cout << "| Enter 2 doubles separated by space: ";
    std::cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    std::cout << "| Comparison result (equals): " << equal_result << std::endl;
    std::cout << "| Comparison result (not equals): " << not_equal_result << std::endl;

    std::cout << "|----------------------------------------------" << std::endl;

    // 1  ==  0.99999999999999999 -> true, jika 9 ada > 17 digit karena floating point

    std::cout << std::endl;
    return 0;
}