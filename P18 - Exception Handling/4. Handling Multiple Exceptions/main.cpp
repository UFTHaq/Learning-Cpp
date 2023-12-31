#include <iostream>
#include <iomanip>

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) {
        throw 0;
    }
    if (gallons < 0 || miles < 0) {
        throw std::string {"Negative value error"};
    }
    return static_cast<double>(miles) / gallons;
}

int main() {
    std::cout << std::endl;

    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;

    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }

    catch (int &ex) {
        std::cerr << "You can't divide by zero" << std::endl;
    }

    catch (std::string &ex) {
        std::cerr << ex << std::endl;
    }

    std::cout << "Bye" << std::endl;

    std::cout << std::endl;
    return 0;
}