#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;

    std::string path {"D:/Coding/C++ - UDEMY/P19 - IO and Streams/11. Writing to a Text File/Copy File 2"};

    std::ifstream in_file {path + "/poem.txt"};
    std::ofstream out_file {path + "/poem_out.txt"};

    if (!in_file) {
        std::cerr << "[ERROR] OPEN FILE" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] OPEN FILE" << std::endl;
    }

    if (!out_file) {
        std::cerr << "[ERROR] OPEN FILE" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] OPEN FILE" << std::endl;
    }

    char c;
    while (in_file.get(c)) {
        out_file.put(c);
    }

    std::cout << "[DONE] COPIED FILE" << std::endl;

    in_file.close();
    out_file.close();

    std::cout << std::endl;
    return 0;
}