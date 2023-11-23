#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;
    std::string path {"D:/Coding/C++ - UDEMY/P19 - IO and Streams/11. Writing to a Text File/Copy File 1"};

    std::ifstream in_file {path + "/poem.txt"};
    std::ofstream out_file {path + "/poem_out.txt"};

    if (!in_file) {
        std::cerr << "[Error] opening input file" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] opening input file" << std::endl;
    }

    if (!out_file) {
        std::cerr << "[Error] opening output file" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] opening output file" << std::endl;
    }

    std::string line {};
    while (std::getline(in_file, line)) {
        out_file << line << std::endl;
    }

    std::cout << "[DONE] File Copied" << std::endl;

    in_file.close();
    out_file.close();

    std::cout << std::endl;
    return 0;
}