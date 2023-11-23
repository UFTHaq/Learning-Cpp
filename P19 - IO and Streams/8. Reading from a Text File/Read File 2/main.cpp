// Test for file open and simple read of 3 data items

#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::cout << std::endl;

    std::string path {"D:\\Coding\\C++ - UDEMY\\P19 - IO and Streams\\8. Reading from a Text File\\Read File 2\\test.txt"};
    std::string name {};
    int num {};
    double total {};

    std::ifstream in_file;
    in_file.open(path);

    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    } else {
        std::cout << "File is good to go\n" << std::endl;
    }

    while (!in_file.eof()) {
        in_file >> name >> num >> total;
        std::cout << std::setw(10) << std::left << name
                << std::setw(10) << num
                << std::setw(10) << total
                << std::endl;
    }

    in_file.close();

    std::cout << std::endl;
    return 0;
}