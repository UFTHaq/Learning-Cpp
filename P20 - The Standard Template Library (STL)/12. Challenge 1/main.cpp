// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    std::deque<char> d;

    // all the string characters that are alpha to the back of the deque in uppercase
    for(char c: s) {
        if(std::isalpha(c)) {
            d.emplace_back(toupper(c));
        }
    }

    char c1 {};
    char c2 {};
    // while are more that 1 characters in the deque
    // remove and compare the front characters with back character
    // if they are not the same - return false since it can't be a palindrome
    // if you complete the loop then the string must be a palindrome
    while (d.size() > 1) {
        c1 = d.front();
        c2 = d.back();
        d.pop_front();
        d.pop_back();
        if (c1 != c2) {
            return false;
        }
    }
    return true;
}

int main(void) {
    std::cout << std::endl;
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}