#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest_rate)
    : Account(name, balance), interest_rate{interest_rate} {
        std::cout << "Savings Constructor - " << name << std::endl;
    }

bool Savings_Account::deposit(double amount) {
    amount = amount + (amount * (interest_rate/100));
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount) {
    return Account::withdraw(amount);
}

void Savings_Account::print(std::ostream &os) const {
        os.precision(2);
        os << std::fixed;
        os << "[Savings: " << name << ", Balance: " << balance << ", Int_rate: " << interest_rate << "]";
    }

Savings_Account::~Savings_Account() {
    std::cout << "Savings Destructor - " << "[" << name << "]" << std::endl;
}