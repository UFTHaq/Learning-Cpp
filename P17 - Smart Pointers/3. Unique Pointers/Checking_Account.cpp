#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account(name, balance) {
        std::cout << "Checking Constructor - " << name << std::endl;
    }

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount) {
    amount = amount + flat_fee;
    return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const {
        os.precision(2);
        os << std::fixed;
        os << "[Checking: " << name << ", Balance: " << balance << "]" ;
    }

Checking_Account::~Checking_Account() {
    std::cout << "Checking Destructor - " << "[" << name << "]" << std::endl;
}