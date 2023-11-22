#include <iostream>
#include <cstring>  // For C-Style String functions
#include <cctype>   // For Character-based functions

int main() {
    std::cout << std::endl;

    // char first_name[20] {};
    // char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // std::cout << first_name;     // Tidak ada apa apa / mungkin akan ngeprint garbage / kosong

    // std::cout << "Please enter your first name: ";
    // std::cin >> first_name;

    // std::cout << "Please enter your last name : ";
    // std::cin >> last_name;
    // std::cout << "------------------------------------------" << std::endl;

    // std::cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << std::endl;
    // std::cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << std::endl;

    // strcpy(full_name, first_name);      // copy first_name to full_name
    // strcat(full_name, " ");             // concatenate a space to full_name
    // strcat(full_name, last_name);       // concatenate last_name to full_name
    // std::cout << "Your full name is " << full_name << std::endl;

    // // Ini akan memotong string hingga whitespace
    // std::cout << "------------------------------------------" << std::endl;
    // std::cout << "Enter your full name: ";
    // std::cin >> full_name;
    // std::cout << "Your full name is " << full_name << std::endl;
    // Ini tidak akan memotong whitespace
    std::cout << "Enter your full name: ";
    std::cin.getline(full_name, 50);
    std::cout << "Your full name is " << full_name << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0) {
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    } else {
        std::cout << temp << " and " << full_name << " are different" << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;

    for (size_t i{0}; i < strlen(full_name); i++) {
        if (isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }
    std::cout << "Your full name is " << full_name << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    if (strcmp(temp, full_name) == 0) {
        std::cout << temp << " and " << full_name << " are the same" << std::endl;
    } else {
        std::cout << temp << " and " << full_name << " are different" << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Result of comparing " << temp << " and " << full_name << " : " << strcmp(temp, full_name) << std::endl;
    std::cout << "Result of comparing " << full_name << " and " << temp << " : " << strcmp(full_name, temp) << std::endl;

    std::cout << std::endl;
    return 0;
}