#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;

    std::string path = "D:/Coding/C++ - UDEMY/P19 - IO and Streams/8. Reading from a Text File/Read File 4";

    std::ifstream in_file;

    in_file.open(path + "/poem.txt");
    if (!in_file) {
        std::cerr << "[ERROR] OPEN" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] OPEN - ";
    }

    char c;
    while (in_file.get(c)) {
        std::cout << c;
    }
    std::cout << std::endl;
    
    in_file.close();

    std::cout << std::endl;
    return 0;
}