#include "Account.h"

Account::Account(std::string name, double balance)
    : name{name}, balance{balance} {
        if (balance < 0.0) {
            throw IllegalBalance_Exception{};
        }
        std::cout << "Account Constructor - " << name << std::endl;
    }

bool Account::deposit(double amount) {
    if (amount < 0) {
        return false;
    } else {
        balance += amount;
    }
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        throw InsufficentFunds_Exception{};
        return false;
    }
}

double Account::get_balance() const {
    return balance;
}

void Account::print(std::ostream &os) const {
        os.precision(2);
        os << std::fixed;
        os << "[Account: " << name << ": " << balance << "]" ;
    }

Account::~Account() {
    std::cout << "Account Destructor - " << "[" << name << "]" << std::endl;
}