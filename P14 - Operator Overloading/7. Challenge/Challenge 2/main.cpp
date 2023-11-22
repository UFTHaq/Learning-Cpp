#include <iostream>
#include "Mystring9.h"

int main() {
    std::cout << std::endl;

    std::cout << std::boolalpha << std::endl;

    Mystring a {"Ukhem"};
    Mystring b {"Ukhem"};

    std::cout << (a == b) << std::endl;             // true
    std::cout << (a != b) << std::endl;             // false

    b = "fahmi";
    std::cout << (a == b) << std::endl;             // false
    std::cout << (a != b) << std::endl;             // true
    std::cout << (a < b) << std::endl;              // true
    std::cout << (a > b) << std::endl;              // false

    Mystring s1 {"UKHEM"};
    s1 = -s1;
    std::cout << s1 << std::endl;                   // ukhem

    s1 = s1 + "***";
    std::cout << s1 << std::endl;                   // ukhem***
    
    s1 += "---";
    std::cout << s1 << std::endl;                   // ukhem***---

    Mystring s2 {"12345"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl;                   // 123451234512345

    Mystring s3 {"abcdef"};
    s3 *= 5;
    std::cout << s3 << std::endl;                   // abcdefabcdefabcdefabcdefabcdef


    Mystring repeat_string;
    int repeat_times;
    std::cout << "Enter a string to repeat: " << std::endl;
    std::cin >> repeat_string;
    std::cout << "How many times would you like it repeated? ";
    std::cin >> repeat_times;
    repeat_string *= repeat_times;
    std::cout << "The resulting string is: " << repeat_string << std::endl;

    std::cout << (repeat_string * 11) << std::endl;

    repeat_string = "RepeatMe-";
    std::cout << (repeat_string + repeat_string) << std::endl;

    repeat_string += (repeat_string * 3);
    std::cout << repeat_string << std::endl;

    repeat_string = "RepeatMe+";
    repeat_string += (repeat_string + repeat_string);
    std::cout << repeat_string << std::endl;


    Mystring s = "Ukhem";
    ++s;
    std::cout << s << std::endl;                    // UKHEM

    s = -s;
    std::cout << s << std::endl;                    // ukhem

    Mystring result;
    result = ++s;
    std::cout << s << std::endl;                    // UKHEM
    std::cout << result << std::endl;               // UKHEM

    s = "Ukhem";
    s++;
    std::cout << s << std::endl;                    // UKHEM

    s = -s;
    std::cout << s << std::endl;                    // ukhem
    result = s++;
    std::cout << s << std::endl;                    // UKHEM
    std::cout << result << std::endl;               // ukhem


    std::cout << std::endl;
    return 0;
}