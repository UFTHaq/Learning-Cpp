#include <iostream>
#include <iomanip>


double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) {
        throw 0;
    }
    double average = static_cast<double>(miles) / gallons;
    return average;
}

int main() {
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    int miles {};
    int gallons {};
    double miles_per_gallon {};

    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;


    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << miles_per_gallon << std::endl;
    }
    catch (int &ex) {
        std::cerr << "You can't divide by zero" << std::endl;
    }

    std::cout << "Bye" << std::endl;

    std::cout << std::endl;
    return 0;
}