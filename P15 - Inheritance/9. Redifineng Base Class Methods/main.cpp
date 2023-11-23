#include <iostream>
#include "Savings_Account.h"

int main() {
    std::cout << std::endl;
    std::cout << "===== Account class ===================================" << std::endl;
    
    Account a1 {1000.0};
    std::cout << a1 << std::endl;       // Account balance: 1000

    a1.deposit(500.0);
    std::cout << a1 << std::endl;       // Account balance: 1500

    a1.withdraw(1000.0);
    std::cout << a1 << std::endl;       // Account balance: 500

    a1.withdraw(2000.0);                // Insufficient funds
    std::cout << a1 << std::endl;       // Account balance: 500

    std::cout << "\n===== Savings Account class ==========================" << std::endl;

    Savings_Account s1 {1000, 5.0};
    std::cout << s1 << std::endl;       // Savings Account balance: 1000, Interest Rate: 5

    s1.deposit(1000);                   // 1000 + 1050 = 2050
    std::cout << s1 << std::endl;       // Savings Account balance: 2050, Interest Rate: 5

    s1.withdraw(2000);
    std::cout << s1 << std::endl;       // Savings Account balance: 50, Interest Rate: 5

    s1.withdraw(100);                   // Insufficient funds
    std::cout << s1 << std::endl;       // Savings Account balance: 50, Interest Rate: 5
    
    std::cout << std::endl;
    return 0;
}