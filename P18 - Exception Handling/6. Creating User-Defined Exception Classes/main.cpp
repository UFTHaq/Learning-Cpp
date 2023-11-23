#include <iostream>
#include <iomanip>

class DivideByZeroException {
};

class NegativeValueException {
};

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) {
        throw DivideByZeroException();
    }
    if (miles < 0 || gallons < 0) {
        throw NegativeValueException();
    }

    return static_cast<double>(miles) / gallons;
}

int main() {
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    int miles{};
    int gallons{};
    double miles_per_gallons{};

    std::cout << "Enter the miles driven: ";
    std::cin >> miles;
    
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;

    try {
        miles_per_gallons = calculate_mpg(miles, gallons);
        std::cout << "[DONE] Result: " << miles_per_gallons << std::endl;
    }
    catch (const DivideByZeroException &ex) {
        std::cerr << "[ERROR] You Can't Divide By Zero" << std::endl;
    }
    catch (const NegativeValueException &ex) {
        std::cerr << "[ERROR] Negative Value Error" << std::endl;
    }

    std::cout << "[SYSTEM END]" << std::endl;

    std::cout << std::endl;
    return 0;
}