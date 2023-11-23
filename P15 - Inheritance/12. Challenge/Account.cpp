#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
        std::cout << "Account Constructor Build - [" << name << "]" << std::endl;
    }

bool Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        return true;
    } else {
        return false;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

double Account::get_balance() const {
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &attribute) {
    os << "[Account: " << attribute.name << ": $" << attribute.balance << "]";
    return os;
}