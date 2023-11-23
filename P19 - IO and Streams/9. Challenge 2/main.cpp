#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

void garis() {
    for (int i = 0; i < 35; i++) {
            std::cout << "-";
    }
    std::cout << std::endl;
}

void print_header() {
    garis();
    std::cout << std::setw(17) << std::left << "Student"
              << std::setw(8) << std::left << "Answer"
              << std::setw(10) << std::right << "Score"
              << std::endl;
    garis();
}

int scoring(std::string &key, std::string &answer) {

    int score {0};
    for (size_t i = 0; i < key.size(); i++) {
        if (key[i] == answer[i]) {
            score++;
        } else {
            score = score;
        }
    }

    return score;
}

void print_student(std::string &name, std::string &answer, int &score) {
    std::cout << std::setw(17) << std::left << name
              << std::setw(8) << std::left << answer
              << std::setw(8) << std::right << score
              << std::endl;
}

void print_footer(double average_score) {
    garis();
    std::cout << std::fixed << std::setprecision(1);
    std::cout << std::setw(25) << std::left << "Average Score"
              << std::setw(9) << std::right << average_score
              << std::endl;
    garis();
}

int main() {
    std::cout << std::endl;

    std::string path = "D:/Coding/C++ - UDEMY/P19 - IO and Streams/9. Challenge 2";

    std::fstream in_file;
    in_file.open(path + "/responses.txt");

    if (!in_file) {
        std::cerr << "[ERROR] Cannot Open" << std::endl;
        return 1;
    } else {
        std::cout << "[DONE] Open File\n" << std::endl;
    }

    std::string key;

    in_file >> key;

    std::cout << "KEY: " << key << std::endl;

    print_header();

    std::string name;
    std::string answer;

    int total_score {};
    int total_student {};
    double average_score {};

    while (!in_file.eof()) {
        in_file >> name >> answer;

        ++total_student;
        int score = scoring(key, answer);
        total_score += score;
        print_student(name, answer, score);
    }

    if (total_student != 0) {
        average_score = static_cast<double>(total_score) / total_student;
    }

    print_footer(average_score);

    in_file.close();

    std::cout << std::endl;
    return 0;
}