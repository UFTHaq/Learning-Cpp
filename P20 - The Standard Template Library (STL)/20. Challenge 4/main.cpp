// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string &word)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    std::queue<char> queue;
    for (char c: word) {
        if (std::isalpha(c)) {
            queue.push(toupper(c));
        }
    }

    std::stack<char> stack;
    for (char c: word) {
        if (std::isalpha(c)) {
            stack.push(toupper(c));
        }
    }

    // CARA LAIN
    // for(char c: word) {
    //     if (isalpha(c)) {
    //         c = toupper(c);
    //         queue.push(c);
    //         stack.push(c);
    //     }
    // }

    char c1 {};
    char c2 {};
    // while are more that 1 characters in the deque
    // remove and compare the front characters with back character
    // if they are not the same - return false since it can't be a palindrome
    // if you complete the loop then the string must be a palindrome
    while (queue.size() > 1) {
        c1 = queue.front();
        queue.pop();
        c2 = stack.top();
        stack.pop();
        if (c1 != c2) {
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& word : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(word)  << word << std::endl;
    }
    std::cout << std::endl;
    return 0;
}