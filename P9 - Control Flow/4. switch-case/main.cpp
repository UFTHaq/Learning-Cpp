// switch - case
/*
    Ask the user what grade they expect on an exam and
    tell them what they need to score to get it.
*/
 
#include <iostream>

int main() {
    std::cout << std::endl;

    char letter_grade{};

    std::cout << "Enter the letter grade you expect on the exam: ";
    std::cin >> letter_grade;

    switch (letter_grade) {
        case 'A':
        case 'a':
            std::cout << "You need a 90 or above, study hard!" << std::endl;
            break;
        case 'B':
        case 'b':
            std::cout << "You need 80-89 for a B, go study!" << std::endl;
            break;
        case 'C':
        case 'c':
            std::cout << "You need 70-79 for an average grade" << std::endl;
            break;
        case 'D':
        case 'd':
            std::cout << "Hmm, you should strive for a better grade. All you need is 60-69" << std::endl;
            break;
        case 'F':
        case 'f': {
            char confirm{};
            std::cout << "Are you sure (Y/N)? ";
            std::cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                std::cout << "OK, I guess you didn't study.." << std::endl;
            } else if (confirm == 'n' || confirm == 'N') {
                std::cout << "Good, go study!" << std::endl;
            } else {
                std::cout << "Illegal choice" << std::endl;
            }
            break;

        }
        default:
            std::cout << "Sorry, not a valid grade" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}