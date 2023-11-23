#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance) 
    : Account{name, balance} {
        std::cout << "Checking Constructor Build - [" << name << "]" << std::endl;
    }

bool Checking_Account::withdraw(double amount) {
    amount += flat_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &attribute) {
    os << "[Checking_Account: " << attribute.name << ": $" << attribute.balance << ", " << attribute.flat_fee << "]";
    return os;
}
