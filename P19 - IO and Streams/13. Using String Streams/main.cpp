#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>

int main() {
    std::cout << std::endl;

    int num {};
    double total {};
    std::string name {};

    std::string info {"Fahmi 100 178.5"};
    std::istringstream iss {info};

    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name
              << std::setw(5) << num 
              << std::setw(10) << total << std::endl;

    std::cout << "====================" << std::endl;

    std::ostringstream oss {};
    oss << std::setw(10) << std::left << name
        << std::setw(5) << num
        << std::setw(10) << total << std::endl;

    std::cout << oss.str() << std::endl;

    std::cout << "\n== DATA VALIDATION ====================" << std::endl;

    int value {};
    std::string entry {};
    bool done = false;

    do {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        std::istringstream validator {entry};
        if (validator >> value) {
            done = !done;
        } else {
            std::cout << "Sorry, that's not an integer" << std::endl;
        }

        // discard the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (!done);

    std::cout << "You entered the integer: " << value << std::endl;

    std::cout << std::endl;
    return 0;
}