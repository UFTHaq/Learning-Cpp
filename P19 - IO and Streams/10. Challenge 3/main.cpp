#include <iostream>
#include <fstream>

bool find_substring(std::string &word_to_find, std::string &word_to_read) {
    size_t found = word_to_read.find(word_to_find);
    if (found == std::string::npos) {
        return false;
    } else {
        return true;
    }
}

int main() {
    std::cout << std::endl;

    std::string path {"D:/Coding/C++ - UDEMY/P19 - IO and Streams/10. Challenge 3"};

    std::ifstream in_file;

    in_file.open(path + "/romeoandjuliet.txt");
    if (!in_file) {
        std::cerr << "[FAILED] to Open" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] to Open" << std::endl;
    }

    std::string word_to_find {};
    std::string word_read {};
    int word_count {};
    int match_count {};

    std::cout << "Enter the substring to search for : ";
    std::cin >> word_to_find;

    while (in_file >> word_read) {
        word_count++;
        if (find_substring(word_to_find, word_read)) {
            match_count++;
            std::cout << word_read << " ";
        }
    }

    std::cout << word_count << " Words were search..." << std::endl;
    std::cout << "The substring " << word_to_find << " was found " << match_count << " times." << std::endl;

    in_file.close();

    std::cout << std::endl;
    return 0;
}