#include <iostream>

/*
    Ukhem's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days
*/

int main() {
    
    int small_room_total {0};
    int large_room_total {0};
    const float small_room_price {25};
    const float large_room_price {35};

    std::cout << "\n===========================================" << std::endl;
    std::cout << "|    Wellcome to My Carpet Service V.2    |" << std::endl;
    std::cout << "===========================================" << std::endl;

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small room: ";
    std::cin >> small_room_total;

    std::cout << "Number of large room: ";
    std::cin >> large_room_total;

    const float pajak {0.06};
    const int estimate_expiry {30};
    float cost {(small_room_price*small_room_total) + (large_room_price*large_room_total)};
    float hasil_pajak {cost * pajak};

    std::cout << "Price per small room: $" << small_room_price << std::endl;
    std::cout << "Price per large room: $" << large_room_price << std::endl;
    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Tax: $" << hasil_pajak << std::endl;

    std::cout << "===========================================" << std::endl;
    std::cout << "Total estimate: $" << cost + hasil_pajak << std::endl;
    std::cout << "This estimate is valid for " << estimate_expiry << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "| Thank's for order My Carpet Service V.2 |" << std::endl;
    std::cout << "===========================================\n" << std::endl;

    return 0;
}