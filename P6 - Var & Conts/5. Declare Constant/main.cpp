// CONSTANT

/*
    Frank' Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days
*/

#include <iostream>

int main() {
    std::cout << "======================================" << std::endl;
    std::cout << "|    Wellcome to My Carpet Service   |" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "Berapa kamar yang ingin dibersihkan: ";
    int total_room {0};
    std::cin >> total_room;
    std::cout << "======================================" << std::endl;

    const float harga {32.5};
    const float pajak {0.06}; 
    const int estimate_expiry {30};
    float cost {harga * total_room};
    float hasil_pajak {cost * pajak};

    std::cout << "\nEstimate for carpet cleaning service: " << std::endl;
    std::cout << "Number of room: " << total_room << std::endl;
    std::cout << "Price per room: $" << harga << std::endl;
    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Tax: $" << hasil_pajak << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "Total estimate: $" << (cost + hasil_pajak) << std::endl;
    std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;
    std::cout << "======================================" << std::endl;

    return 0;
}