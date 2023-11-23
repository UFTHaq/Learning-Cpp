#include <iostream>
#include <fstream>

int main() {
    std::cout << std::endl;

    std::string path {"D:/CODING/C++ - UDEMY/P19 - IO AND STREAMS/12. CHALLENGE 4"};
    
    std::ifstream in_file {path + "/romeoandjuliet.txt"};
    std::ofstream out_file {path + "/romeoandjuliet_out.txt"};

    if (!in_file) {
        std::cerr << "[ERROR] OPEN FILE" << std::endl;
        return 1;
    } {
        std::cout << "[DONE] OPEN FILE" << std::endl;
    }

    if (!out_file) {
        std::cerr << "[ERROR] OPEN FILE" << std::endl;
    } else {
        std::cout << "[DONE] OPEN FILE" << std::endl;
    }

    int line_number {};
    std::string line {};

    while (!in_file.eof()) {
        std::getline(in_file, line);
        if (!line.empty()) {
            line_number++;
            out_file << line_number << ". " << line << std::endl;
        } else {
            out_file << line << std::endl;
        }
    }

    std::cout << "[COPY COMPLETED]" << std::endl;

    in_file.close();
    out_file.close();

    std::cout << std::endl;
    return 0;
}