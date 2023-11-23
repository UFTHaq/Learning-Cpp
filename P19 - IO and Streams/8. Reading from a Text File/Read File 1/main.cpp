// Test for file open and simple read of 3 data items

#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;

    std::string path {"D:\\Coding\\C++ - UDEMY\\P19 - IO and Streams\\8. Reading from a Text File\\Read File 1\\test.txt"};
    std::string line {};
    int num {};
    double total {};

    std::ifstream in_file;
    in_file.open(path);

    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    } else {
        std::cout << "File is good to go" << std::endl;
    }

    in_file >> line >> num >> total;

    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;

    in_file.close();

    std::cout << std::endl;
    return 0;
}