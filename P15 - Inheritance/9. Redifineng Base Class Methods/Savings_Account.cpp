#include "Savings_Account.h"

Savings_Account::Savings_Account() 
    : Savings_Account{0.0, 0.0} {
}

Savings_Account::Savings_Account(double balance, double int_rate)
    : Account(balance), int_rate(int_rate) {
        std::cout << "Savings Constructor Called" << std::endl;
    }

void Savings_Account::deposit(double amount) {
    amount = amount + (amount * (int_rate/100));
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &attribute) {
    os << "Savings account balance: " << attribute.balance << ", Interest rate: " << attribute.int_rate;
    return os;
}