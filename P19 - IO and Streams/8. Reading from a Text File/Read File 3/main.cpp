#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;

    std::string path {"D:\\Coding\\C++ - UDEMY\\P19 - IO and Streams\\8. Reading from a Text File\\Read File 3"};

    std::ifstream in_file;
    in_file.open(path + "\\poem.txt");

    if (!in_file) {
        std::cerr << "Problem Opening File" << std::endl;
        return 1;
    } else {
        std::cout << "File is Opened\n" << std::endl;
    }

    std::string line;
    while (!in_file.eof()) {
        std::getline(in_file, line);
        std::cout << line << std::endl;
    }

    in_file.close();

    std::cout << std::endl;
    return 0;
}