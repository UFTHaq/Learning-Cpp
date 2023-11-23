#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;
    std::string path {"D:/Coding/C++ - UDEMY/P19 - IO and Streams/11. Writing to a Text File/Write File/output.txt"};

    std::ofstream out_file {path, std::ios::app};

    if (!out_file) {
        std::cerr << "Error creating file" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] Creating file" << std::endl;
    }

    std::string line {};
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);

    out_file << line << std::endl;

    out_file.close();

    std::cout << std::endl;
    return 0;
}