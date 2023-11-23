#include "Account.h"

Account::Account()
    : Account(0.0) {
        // delegating constructor
        std::cout << "Account Constructor Called - using Delegating" << std::endl;
    }

Account::Account(double balance) 
    : balance(balance) {
    }

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance - amount > 0) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }
}

Account::~Account() {

}

// Menggunakan friend untuk mengambil attribute balance pada class Account
std::ostream &operator<<(std::ostream &os, const Account &attribute) {
    os << "Account balance: " << attribute.balance;
    return os;
}
